/* 1/88 jc */
/*
 * This file contains output-related routines, as (originally) scavenged
 * from ui_token, where they never should have been to begin with.
 */
# include "ui.h"
# include "ui_globals.h"


/*
 * Static data.
 */
static bool Out_tty = FALSE;
static int  Out_lun;
static bool Initialized = FALSE;
# define MAXLINE 1000
static char Obuf[MAXLINE];

static bool Pager_mode = TRUE;		/* Are we in pager mode? */
static int Page_size = 21;		/* How many lines to a screen page */



uio_init (tty, lun)
bool tty;
int lun;
/*
 * Initialize the output module by telling it where our output is
 * going.
 */
{
	Out_tty = tty;
	Out_lun = lun;
	Initialized = TRUE;
	Obuf[0] = '\0';
/*
 * Set up our indirect variables.
 */
	usy_c_indirect (Ui_variable_table, "ui$pager_mode", &Pager_mode,
		SYMT_BOOL, 0);
	usy_c_indirect (Ui_variable_table, "ui$page_size", &Page_size,
		SYMT_INT, 0);
	usy_c_indirect (Ui_variable_table, "ui$nlines", &Nlines, SYMT_INT, 0);
	Page_size = tty_nlines () - 3;
	Nlines = 0;
}





ui_printf (fmt, ARGS)
char *fmt;
int ARGS;
/*
 * Perform a printf() through the user interface I/O.
 */
{
	char buf[1000];
	int nadd;
/*
 * Encode the output.
 */
 	sprintrmt (buf, fmt, SPRINTARGS);
/*
 * Now figure out how to put it out.
 */
 	if (! Initialized)
		printf (buf);
 	else if (Out_tty)
	{
		char fbuf[1000];

		if (Pager_mode && Nlines >= Page_size)
			uio_stall ();
		nadd = ui_fix_lf (buf, fbuf);
		tty_sout (fbuf, strlen (fbuf));
		tty_flush ();
		Nlines += nadd;
	}
	else
		ui_line_out (buf);
}





ui_nf_printf (fmt, ARGS)
char *fmt;
int ARGS;
/*
 * Perform a printf() through the user interface I/O.  This version does not
 * flush the data out to the screen.
 */
{
	char buf[200];
/*
 * Encode the output.
 */
 	sprintrmt (buf, fmt, SPRINTARGS);
/*
 * Now figure out how to put it out.
 */
	if (! Initialized)
		printf (buf);
 	else if (Out_tty)
	{
		char fbuf[200];

		if (Pager_mode && Nlines >= Page_size)
			uio_stall ();
		Nlines += ui_fix_lf (buf, fbuf);
		tty_sout (fbuf, strlen (fbuf));
	}
	else
		ui_line_out (buf);
}



ui_fix_lf (old, new)
char *old, *new;
/*
 * Turn \n into \r\n through the buffer.
 */
{
	int nadd = 0;

	while (*new++ = *old++)
		if (new[-1] == '\n')
		{
			nadd++;
			*new++ = '\r';
		}
	Bol = new[-2] == '\r';
	return (nadd);
}




ui_line_out (line)
char *line;
/*
 * Put this line to the output file.
 */
{
	char	*nl, *beg_line = Obuf, *strchr ();

	if (! Initialized)
	{
		printf (line);
		return;
	}
/*
 * Start by tacking this line into the output buffer.
 */
 	strcat (Obuf, line);
/*
 * Now pass through and clean out any full lines.  Not the most
 * efficient way, I know, but so it goes.
 */
	while (nl = strchr (beg_line, '\n'))
	{
		int	len = nl - beg_line;
		dput (Out_lun, beg_line, len);
		beg_line = nl + 1;
	}
/*
 * OK, all of the complete lines have been shoved out.  Move any remaining
 * text forward.
 */
 	if (*beg_line)
		strcpy (Obuf, beg_line);
	else
		Obuf[0] = 0;
}




uio_stall ()
/*
 * Wait for user input before continuing with output.
 */
{
	int c;
/*
 * Put the prompt out.
 */
	if (! Bol)
		tty_sout ("\r\n");
	tty_sout ("` Hit <SPACE> to continue, ^C to quit `");
	tty_flush ();
	Bol = FALSE; /* So prompt is right if we are interrupted here */
/*
 * Now get a character back, and continue.
 */
	c = tty_readch ();
	tty_sout ("\r                                     \r");
	if (c == '\r')
		Nlines--;
	else if (c == 'q')
		Nlines = -9999;		/* No more paging for the moment */
	else if (c == 'd')
		Nlines -= 10;
	else
		Nlines = 0;
	Bol = TRUE;
}
