/*
 *  GKL_SF1 - GKS Stroke Font 1
 *
 *  Facility:	GKS Utility Library
 *
 *  Abstract:
 *
 *	This module contains the stroke arrays for the STROKE precision 
 *	text font 1 (ASCII character set).
 *
 *  Environment:  Runs at any access mode - AST Reentrant
 *
 *  Author: 		Michael Spratte
 *
 *  Creation Date:	28 September 1984
 *
 *  Modified by:
 *
 *  1-001 - Original
 *
 */ 
/*		Stroke Arrays for Font 1	*/

/*  Font Size Entry (Pointed to be character code 0)  */

/*				top	cap	base	bottom	*/
static short size[4] = { 16,	12,	-9,	-16 };

/*  Stroke Tables  */

static short ascii_027[ 28] = { 10, '\027',  -4,   13,	/* degrees */
	   0,  10,
	   0,  13,
	   3,  16,
	   6,  16,
	   9,  13,
	   9,  10,
	   6,   7,
	   3,   7,
	   0,  10,
	-128,   0};
static short ascii_040[  6] = {  1, '\040',  -8,   8,	/*   */
	-128,   0};
static short ascii_041[ 34] = { 15, '\041',  -5,   5,	/* ! */
	   0,  12,
	  -1,  10,
	   0,  -2,
	   1,  10,
	   0,  12,
	-128,   0,
	   0,  10,
	   0,   4,
	-128,   0,
	   0,  -7,
	  -1,  -8,
	   0,  -9,
	   1,  -8,
	   0,  -7,
	-128,   0};
static short ascii_042[ 28] = { 12, '\042',  -8,   8,	/* " */
	  -4,  12,
	  -5,   5,
	-128,   0,
	  -3,  12,
	  -5,   5,
	-128,   0,
	   4,  12,
	   3,   5,
	-128,   0,
	   5,  12,
	   3,   5,
	-128,   0};
static short ascii_043[ 28] = { 12, '\043', -10,  11,	/* # */
	   1,  12,
	  -6, -16,
	-128,   0,
	   7,  12,
	   0, -16,
	-128,   0,
	  -6,   1,
	   8,   1,
	-128,   0,
	  -7,  -5,
	   7,  -5,
	-128,   0};
static short ascii_044[ 88] = { 42, '\044', -10,  10,	/* $ */
	  -2,  16,
	  -2, -13,
	-128,   0,
	   2,  16,
	   2, -13,
	-128,   0,
	   6,   9,
	   5,   8,
	   6,   7,
	   7,   8,
	   7,   9,
	   5,  11,
	   2,  12,
	  -2,  12,
	  -5,  11,
	  -7,   9,
	  -7,   7,
	  -6,   5,
	  -5,   4,
	  -3,   3,
	   3,   1,
	   5,   0,
	   7,  -2,
	-128,   0,
	  -7,   7,
	  -5,   5,
	  -3,   4,
	   3,   2,
	   5,   1,
	   6,   0,
	   7,  -2,
	   7,  -6,
	   5,  -8,
	   2,  -9,
	  -2,  -9,
	  -5,  -8,
	  -7,  -6,
	  -7,  -5,
	  -6,  -4,
	  -5,  -5,
	  -6,  -6,
	-128,   0};
static short ascii_045[ 68] = { 32, '\045', -12,  12,	/* % */
	   9,  12,
	  -9,  -9,
	-128,   0,
	  -4,  12,
	  -2,  10,
	  -2,   8,
	  -3,   6,
	  -5,   5,
	  -7,   5,
	  -9,   7,
	  -9,   9,
	  -8,  11,
	  -6,  12,
	  -4,  12,
	  -2,  11,
	   1,  10,
	   4,  10,
	   7,  11,
	   9,  12,
	-128,   0,
	   5,  -2,
	   3,  -3,
	   2,  -5,
	   2,  -7,
	   4,  -9,
	   6,  -9,
	   8,  -8,
	   9,  -6,
	   9,  -4,
	   7,  -2,
	   5,  -2,
	-128,   0};
static short ascii_046[102] = { 49, '\046', -12,  13,	/* & */
	   9,   4,
	   8,   3,
	   9,   2,
	  10,   3,
	  10,   4,
	   9,   5,
	   8,   5,
	   7,   4,
	   6,   2,
	   4,  -4,
	   3,  -6,
	   1,  -8,
	  -1,  -9,
	  -5,  -9,
	  -8,  -8,
	  -9,  -6,
	  -9,  -3,
	  -8,  -1,
	  -2,   3,
	   0,   5,
	   1,   7,
	   1,   9,
	   0,  11,
	  -2,  12,
	  -4,  11,
	  -5,   9,
	  -5,   7,
	  -4,   4,
	  -2,   1,
	   3,  -6,
	   5,  -8,
	   8,  -9,
	   9,  -9,
	  10,  -8,
	  10,  -7,
	-128,   0,
	  -5,  -9,
	  -7,  -8,
	  -8,  -6,
	  -8,  -3,
	  -7,  -1,
	  -5,   1,
	-128,   0,
	  -5,   7,
	  -4,   5,
	   4,  -6,
	   6,  -8,
	   8,  -9,
	-128,   0};
static short ascii_047[ 20] = {  8, '\047',  -5,   5,	/* ' */
	   0,  10,
	  -1,  11,
	   0,  12,
	   1,  11,
	   1,   9,
	   0,   7,
	  -1,   6,
	-128,   0};
static short ascii_050[ 44] = { 20, '\050',  -7,   7,	/* ( */
	   4,  16,
	   2,  14,
	   0,  11,
	  -2,   7,
	  -3,   2,
	  -3,  -2,
	  -2,  -7,
	   0, -11,
	   2, -14,
	   4, -16,
	-128,   0,
	   2,  14,
	   0,  10,
	  -1,   7,
	  -2,   2,
	  -2,  -2,
	  -1,  -7,
	   0, -10,
	   2, -14,
	-128,   0};
static short ascii_051[ 44] = { 20, '\051',  -7,   7,	/* ) */
	  -4,  16,
	  -2,  14,
	   0,  11,
	   2,   7,
	   3,   2,
	   3,  -2,
	   2,  -7,
	   0, -11,
	  -2, -14,
	  -4, -16,
	-128,   0,
	  -2,  14,
	   0,  10,
	   1,   7,
	   2,   2,
	   2,  -2,
	   1,  -7,
	   0, -10,
	  -2, -14,
	-128,   0};
static short ascii_052[ 22] = {  9, '\052',  -8,   8,	/* * */
	   0,  12,
	   0,   0,
	-128,   0,
	  -5,   9,
	   5,   3,
	-128,   0,
	   5,   9,
	  -5,   3,
	-128,   0};
static short ascii_053[ 16] = {  6, '\053', -13,  13,	/* + */
	   0,   9,
	   0,  -9,
	-128,   0,
	  -9,   0,
	   9,   0,
	-128,   0};
static short ascii_054[ 20] = {  8, '\054',  -5,   5,	/* , */
	   0,  -9,
	  -1,  -8,
	   0,  -7,
	   1,  -8,
	   1, -10,
	   0, -12,
	  -1, -13,
	-128,   0};
static short ascii_055[ 10] = {  3, '\055', -13,  13,	/* - */
	  -9,   0,
	   9,   0,
	-128,   0};
static short ascii_056[ 16] = {  6, '\056',  -5,   5,	/* . */
	   0,  -7,
	  -1,  -8,
	   0,  -9,
	   1,  -8,
	   0,  -7,
	-128,   0};
static short ascii_057[ 10] = {  3, '\057', -11,  11,	/* / */
	   9,  16,
	  -9, -16,
	-128,   0};
static short ascii_060[ 84] = { 40, '\060', -10,  10,	/* 0 */
	  -1,  12,
	  -4,  11,
	  -6,   8,
	  -7,   3,
	  -7,   0,
	  -6,  -5,
	  -4,  -8,
	  -1,  -9,
	   1,  -9,
	   4,  -8,
	   6,  -5,
	   7,   0,
	   7,   3,
	   6,   8,
	   4,  11,
	   1,  12,
	  -1,  12,
	-128,   0,
	  -1,  12,
	  -3,  11,
	  -4,  10,
	  -5,   8,
	  -6,   3,
	  -6,   0,
	  -5,  -5,
	  -4,  -7,
	  -3,  -8,
	  -1,  -9,
	-128,   0,
	   1,  -9,
	   3,  -8,
	   4,  -7,
	   5,  -5,
	   6,   0,
	   6,   3,
	   5,   8,
	   4,  10,
	   3,  11,
	   1,  12,
	-128,   0};
static short ascii_061[ 26] = { 11, '\061', -10,  10,	/* 1 */
	  -4,   8,
	  -2,   9,
	   1,  12,
	   1,  -9,
	-128,   0,
	   0,  11,
	   0,  -9,
	-128,   0,
	  -4,  -9,
	   5,  -9,
	-128,   0};
static short ascii_062[ 94] = { 45, '\062', -10,  10,	/* 2 */
	  -6,   8,
	  -5,   7,
	  -6,   6,
	  -7,   7,
	  -7,   8,
	  -6,  10,
	  -5,  11,
	  -2,  12,
	   2,  12,
	   5,  11,
	   6,  10,
	   7,   8,
	   7,   6,
	   6,   4,
	   3,   2,
	  -2,   0,
	  -4,  -1,
	  -6,  -3,
	  -7,  -6,
	  -7,  -9,
	-128,   0,
	   2,  12,
	   4,  11,
	   5,  10,
	   6,   8,
	   6,   6,
	   5,   4,
	   2,   2,
	  -2,   0,
	-128,   0,
	  -7,  -7,
	  -6,  -6,
	  -4,  -6,
	   1,  -8,
	   4,  -8,
	   6,  -7,
	   7,  -6,
	-128,   0,
	  -4,  -6,
	   1,  -9,
	   5,  -9,
	   6,  -8,
	   7,  -6,
	   7,  -4,
	-128,   0};
static short ascii_063[ 96] = { 46, '\063', -10,  10,	/* 3 */
	  -6,   9,
	  -5,   8,
	  -6,   7,
	  -7,   8,
	  -7,   9,
	  -5,  11,
	  -2,  12,
	   2,  12,
	   5,  11,
	   6,   9,
	   6,   6,
	   5,   4,
	   2,   3,
	  -1,   3,
	-128,   0,
	   2,  12,
	   4,  11,
	   5,   9,
	   5,   6,
	   4,   4,
	   2,   3,
	-128,   0,
	   2,   3,
	   4,   2,
	   6,   0,
	   7,  -2,
	   7,  -5,
	   6,  -7,
	   5,  -8,
	   2,  -9,
	  -2,  -9,
	  -5,  -8,
	  -6,  -7,
	  -7,  -5,
	  -7,  -4,
	  -6,  -3,
	  -5,  -4,
	  -6,  -5,
	-128,   0,
	   5,   1,
	   6,  -2,
	   6,  -5,
	   5,  -7,
	   4,  -8,
	   2,  -9,
	-128,   0};
static short ascii_064[ 30] = { 13, '\064', -10,  10,	/* 4 */
	   2,  10,
	   2,  -9,
	-128,   0,
	   3,  12,
	   3,  -9,
	-128,   0,
	   3,  12,
	  -8,  -3,
	   8,  -3,
	-128,   0,
	  -1,  -9,
	   6,  -9,
	-128,   0};
static short ascii_065[ 82] = { 39, '\065', -10,  10,	/* 5 */
	  -5,  12,
	  -7,   2,
	-128,   0,
	  -7,   2,
	  -5,   4,
	  -2,   5,
	   1,   5,
	   4,   4,
	   6,   2,
	   7,  -1,
	   7,  -3,
	   6,  -6,
	   4,  -8,
	   1,  -9,
	  -2,  -9,
	  -5,  -8,
	  -6,  -7,
	  -7,  -5,
	  -7,  -4,
	  -6,  -3,
	  -5,  -4,
	  -6,  -5,
	-128,   0,
	   1,   5,
	   3,   4,
	   5,   2,
	   6,  -1,
	   6,  -3,
	   5,  -6,
	   3,  -8,
	   1,  -9,
	-128,   0,
	  -5,  12,
	   5,  12,
	-128,   0,
	  -5,  11,
	   0,  11,
	   5,  12,
	-128,   0};
static short ascii_066[100] = { 48, '\066', -10,  10,	/* 6 */
	   5,   9,
	   4,   8,
	   5,   7,
	   6,   8,
	   6,   9,
	   5,  11,
	   3,  12,
	   0,  12,
	  -3,  11,
	  -5,   9,
	  -6,   7,
	  -7,   3,
	  -7,  -3,
	  -6,  -6,
	  -4,  -8,
	  -1,  -9,
	   1,  -9,
	   4,  -8,
	   6,  -6,
	   7,  -3,
	   7,  -2,
	   6,   1,
	   4,   3,
	   1,   4,
	   0,   4,
	  -3,   3,
	  -5,   1,
	  -6,  -2,
	-128,   0,
	   0,  12,
	  -2,  11,
	  -4,   9,
	  -5,   7,
	  -6,   3,
	  -6,  -3,
	  -5,  -6,
	  -3,  -8,
	  -1,  -9,
	-128,   0,
	   1,  -9,
	   3,  -8,
	   5,  -6,
	   6,  -3,
	   6,  -2,
	   5,   1,
	   3,   3,
	   1,   4,
	-128,   0};
static short ascii_067[ 66] = { 31, '\067', -10,  10,	/* 7 */
	  -7,  12,
	  -7,   6,
	-128,   0,
	  -7,   8,
	  -6,  10,
	  -4,  12,
	  -2,  12,
	   3,   9,
	   5,   9,
	   6,  10,
	   7,  12,
	-128,   0,
	  -6,  10,
	  -4,  11,
	  -2,  11,
	   3,   9,
	-128,   0,
	   7,  12,
	   7,   9,
	   6,   6,
	   2,   1,
	   1,  -1,
	   0,  -4,
	   0,  -9,
	-128,   0,
	   6,   6,
	   1,   1,
	   0,  -1,
	  -1,  -4,
	  -1,  -9,
	-128,   0};
static short ascii_070[130] = { 63, '\070', -10,  10,	/* 8 */
	  -2,  12,
	  -5,  11,
	  -6,   9,
	  -6,   6,
	  -5,   4,
	  -2,   3,
	   2,   3,
	   5,   4,
	   6,   6,
	   6,   9,
	   5,  11,
	   2,  12,
	  -2,  12,
	-128,   0,
	  -2,  12,
	  -4,  11,
	  -5,   9,
	  -5,   6,
	  -4,   4,
	  -2,   3,
	-128,   0,
	   2,   3,
	   4,   4,
	   5,   6,
	   5,   9,
	   4,  11,
	   2,  12,
	-128,   0,
	  -2,   3,
	  -5,   2,
	  -6,   1,
	  -7,  -1,
	  -7,  -5,
	  -6,  -7,
	  -5,  -8,
	  -2,  -9,
	   2,  -9,
	   5,  -8,
	   6,  -7,
	   7,  -5,
	   7,  -1,
	   6,   1,
	   5,   2,
	   2,   3,
	-128,   0,
	  -2,   3,
	  -4,   2,
	  -5,   1,
	  -6,  -1,
	  -6,  -5,
	  -5,  -7,
	  -4,  -8,
	  -2,  -9,
	-128,   0,
	   2,  -9,
	   4,  -8,
	   5,  -7,
	   6,  -5,
	   6,  -1,
	   5,   1,
	   4,   2,
	   2,   3,
	-128,   0};
static short ascii_071[100] = { 48, '\071', -10,  10,	/* 9 */
	   6,   5,
	   5,   2,
	   3,   0,
	   0,  -1,
	  -1,  -1,
	  -4,   0,
	  -6,   2,
	  -7,   5,
	  -7,   6,
	  -6,   9,
	  -4,  11,
	  -1,  12,
	   1,  12,
	   4,  11,
	   6,   9,
	   7,   6,
	   7,   0,
	   6,  -4,
	   5,  -6,
	   3,  -8,
	   0,  -9,
	  -3,  -9,
	  -5,  -8,
	  -6,  -6,
	  -6,  -5,
	  -5,  -4,
	  -4,  -5,
	  -5,  -6,
	-128,   0,
	  -1,  -1,
	  -3,   0,
	  -5,   2,
	  -6,   5,
	  -6,   6,
	  -5,   9,
	  -3,  11,
	  -1,  12,
	-128,   0,
	   1,  12,
	   3,  11,
	   5,   9,
	   6,   6,
	   6,   0,
	   5,  -4,
	   4,  -6,
	   2,  -8,
	   0,  -9,
	-128,   0};
static short ascii_072[ 28] = { 12, '\072',  -5,   5,	/* : */
	   0,   5,
	  -1,   4,
	   0,   3,
	   1,   4,
	   0,   5,
	-128,   0,
	   0,  -7,
	  -1,  -8,
	   0,  -9,
	   1,  -8,
	   0,  -7,
	-128,   0};
static short ascii_073[ 32] = { 14, '\073',  -5,   5,	/* ; */
	   0,   5,
	  -1,   4,
	   0,   3,
	   1,   4,
	   0,   5,
	-128,   0,
	   0,  -9,
	  -1,  -8,
	   0,  -7,
	   1,  -8,
	   1, -10,
	   0, -12,
	  -1, -13,
	-128,   0};
static short ascii_074[ 12] = {  4, '\074', -12,  12,	/* < */
	   8,   9,
	  -8,   0,
	   8,  -9,
	-128,   0};
static short ascii_075[ 16] = {  6, '\075', -13,  13,	/* = */
	  -9,   3,
	   9,   3,
	-128,   0,
	  -9,  -3,
	   9,  -3,
	-128,   0};
static short ascii_076[ 12] = {  4, '\076', -12,  12,	/* > */
	  -8,   9,
	   8,   0,
	  -8,  -9,
	-128,   0};
static short ascii_077[ 68] = { 32, '\077',  -9,   9,	/* ? */
	  -5,   8,
	  -4,   7,
	  -5,   6,
	  -6,   7,
	  -6,   8,
	  -5,  10,
	  -4,  11,
	  -2,  12,
	   1,  12,
	   4,  11,
	   5,  10,
	   6,   8,
	   6,   6,
	   5,   4,
	   4,   3,
	   0,   1,
	   0,  -2,
	-128,   0,
	   1,  12,
	   3,  11,
	   4,  10,
	   5,   8,
	   5,   6,
	   4,   4,
	   2,   2,
	-128,   0,
	   0,  -7,
	  -1,  -8,
	   0,  -9,
	   1,  -8,
	   0,  -7,
	-128,   0};
static short ascii_100[116] = { 56, '\100', -13,  14,	/* @ */
	   5,   4,
	   4,   6,
	   2,   7,
	  -1,   7,
	  -3,   6,
	  -4,   5,
	  -5,   2,
	  -5,  -1,
	  -4,  -3,
	  -2,  -4,
	   1,  -4,
	   3,  -3,
	   4,  -1,
	-128,   0,
	  -1,   7,
	  -3,   5,
	  -4,   2,
	  -4,  -1,
	  -3,  -3,
	  -2,  -4,
	-128,   0,
	   5,   7,
	   4,  -1,
	   4,  -3,
	   6,  -4,
	   8,  -4,
	  10,  -2,
	  11,   1,
	  11,   3,
	  10,   6,
	   9,   8,
	   7,  10,
	   5,  11,
	   2,  12,
	  -1,  12,
	  -4,  11,
	  -6,  10,
	  -8,   8,
	  -9,   6,
	 -10,   3,
	 -10,   0,
	  -9,  -3,
	  -8,  -5,
	  -6,  -7,
	  -4,  -8,
	  -1,  -9,
	   2,  -9,
	   5,  -8,
	   7,  -7,
	   8,  -6,
	-128,   0,
	   6,   7,
	   5,  -1,
	   5,  -3,
	   6,  -4,
	-128,   0};
static short ascii_101[ 40] = { 18, '\101', -10,  10,	/* A */
	   0,  12,
	  -7,  -9,
	-128,   0,
	   0,  12,
	   7,  -9,
	-128,   0,
	   0,   9,
	   6,  -9,
	-128,   0,
	  -5,  -3,
	   4,  -3,
	-128,   0,
	  -9,  -9,
	  -3,  -9,
	-128,   0,
	   3,  -9,
	   9,  -9,
	-128,   0};
static short ascii_102[ 94] = { 45, '\102', -11,  11,	/* B */
	  -6,  12,
	  -6,  -9,
	-128,   0,
	  -5,  12,
	  -5,  -9,
	-128,   0,
	  -9,  12,
	   3,  12,
	   6,  11,
	   7,  10,
	   8,   8,
	   8,   6,
	   7,   4,
	   6,   3,
	   3,   2,
	-128,   0,
	   3,  12,
	   5,  11,
	   6,  10,
	   7,   8,
	   7,   6,
	   6,   4,
	   5,   3,
	   3,   2,
	-128,   0,
	  -5,   2,
	   3,   2,
	   6,   1,
	   7,   0,
	   8,  -2,
	   8,  -5,
	   7,  -7,
	   6,  -8,
	   3,  -9,
	  -9,  -9,
	-128,   0,
	   3,   2,
	   5,   1,
	   6,   0,
	   7,  -2,
	   7,  -5,
	   6,  -7,
	   5,  -8,
	   3,  -9,
	-128,   0};
static short ascii_103[ 68] = { 32, '\103', -11,  10,	/* C */
	   6,   9,
	   7,   6,
	   7,  12,
	   6,   9,
	   4,  11,
	   1,  12,
	  -1,  12,
	  -4,  11,
	  -6,   9,
	  -7,   7,
	  -8,   4,
	  -8,  -1,
	  -7,  -4,
	  -6,  -6,
	  -4,  -8,
	  -1,  -9,
	   1,  -9,
	   4,  -8,
	   6,  -6,
	   7,  -4,
	-128,   0,
	  -1,  12,
	  -3,  11,
	  -5,   9,
	  -6,   7,
	  -7,   4,
	  -7,  -1,
	  -6,  -4,
	  -5,  -6,
	  -3,  -8,
	  -1,  -9,
	-128,   0};
static short ascii_104[ 64] = { 30, '\104', -11,  11,	/* D */
	  -6,  12,
	  -6,  -9,
	-128,   0,
	  -5,  12,
	  -5,  -9,
	-128,   0,
	  -9,  12,
	   1,  12,
	   4,  11,
	   6,   9,
	   7,   7,
	   8,   4,
	   8,  -1,
	   7,  -4,
	   6,  -6,
	   4,  -8,
	   1,  -9,
	  -9,  -9,
	-128,   0,
	   1,  12,
	   3,  11,
	   5,   9,
	   6,   7,
	   7,   4,
	   7,  -1,
	   6,  -4,
	   5,  -6,
	   3,  -8,
	   1,  -9,
	-128,   0};
static short ascii_105[ 48] = { 22, '\105', -11,  10,	/* E */
	  -6,  12,
	  -6,  -9,
	-128,   0,
	  -5,  12,
	  -5,  -9,
	-128,   0,
	   1,   6,
	   1,  -2,
	-128,   0,
	  -9,  12,
	   7,  12,
	   7,   6,
	   6,  12,
	-128,   0,
	  -5,   2,
	   1,   2,
	-128,   0,
	  -9,  -9,
	   7,  -9,
	   7,  -3,
	   6,  -9,
	-128,   0};
static short ascii_106[ 44] = { 20, '\106', -11,   9,	/* F */
	  -6,  12,
	  -6,  -9,
	-128,   0,
	  -5,  12,
	  -5,  -9,
	-128,   0,
	   1,   6,
	   1,  -2,
	-128,   0,
	  -9,  12,
	   7,  12,
	   7,   6,
	   6,  12,
	-128,   0,
	  -5,   2,
	   1,   2,
	-128,   0,
	  -9,  -9,
	  -2,  -9,
	-128,   0};
static short ascii_107[ 84] = { 40, '\107', -11,  12,	/* G */
	   6,   9,
	   7,   6,
	   7,  12,
	   6,   9,
	   4,  11,
	   1,  12,
	  -1,  12,
	  -4,  11,
	  -6,   9,
	  -7,   7,
	  -8,   4,
	  -8,  -1,
	  -7,  -4,
	  -6,  -6,
	  -4,  -8,
	  -1,  -9,
	   1,  -9,
	   4,  -8,
	   6,  -6,
	-128,   0,
	  -1,  12,
	  -3,  11,
	  -5,   9,
	  -6,   7,
	  -7,   4,
	  -7,  -1,
	  -6,  -4,
	  -5,  -6,
	  -3,  -8,
	  -1,  -9,
	-128,   0,
	   6,  -1,
	   6,  -9,
	-128,   0,
	   7,  -1,
	   7,  -9,
	-128,   0,
	   3,  -1,
	  10,  -1,
	-128,   0};
static short ascii_110[ 58] = { 27, '\110', -12,  12,	/* H */
	  -7,  12,
	  -7,  -9,
	-128,   0,
	  -6,  12,
	  -6,  -9,
	-128,   0,
	   6,  12,
	   6,  -9,
	-128,   0,
	   7,  12,
	   7,  -9,
	-128,   0,
	 -10,  12,
	  -3,  12,
	-128,   0,
	   3,  12,
	  10,  12,
	-128,   0,
	  -6,   2,
	   6,   2,
	-128,   0,
	 -10,  -9,
	  -3,  -9,
	-128,   0,
	   3,  -9,
	  10,  -9,
	-128,   0};
static short ascii_111[ 28] = { 12, '\111',  -5,   6,	/* I */
	   0,  12,
	   0,  -9,
	-128,   0,
	   1,  12,
	   1,  -9,
	-128,   0,
	  -3,  12,
	   4,  12,
	-128,   0,
	  -3,  -9,
	   4,  -9,
	-128,   0};
static short ascii_112[ 44] = { 20, '\112',  -7,   8,	/* J */
	   3,  12,
	   3,  -5,
	   2,  -8,
	   0,  -9,
	  -2,  -9,
	  -4,  -8,
	  -5,  -6,
	  -5,  -4,
	  -4,  -3,
	  -3,  -4,
	  -4,  -5,
	-128,   0,
	   2,  12,
	   2,  -5,
	   1,  -8,
	   0,  -9,
	-128,   0,
	  -1,  12,
	   6,  12,
	-128,   0};
static short ascii_113[ 58] = { 27, '\113', -12,  10,	/* K */
	  -7,  12,
	  -7,  -9,
	-128,   0,
	  -6,  12,
	  -6,  -9,
	-128,   0,
	   7,  12,
	  -6,  -1,
	-128,   0,
	  -1,   3,
	   7,  -9,
	-128,   0,
	  -2,   3,
	   6,  -9,
	-128,   0,
	 -10,  12,
	  -3,  12,
	-128,   0,
	   3,  12,
	   9,  12,
	-128,   0,
	 -10,  -9,
	  -3,  -9,
	-128,   0,
	   3,  -9,
	   9,  -9,
	-128,   0};
static short ascii_114[ 32] = { 14, '\114',  -9,   9,	/* L */
	  -4,  12,
	  -4,  -9,
	-128,   0,
	  -3,  12,
	  -3,  -9,
	-128,   0,
	  -7,  12,
	   0,  12,
	-128,   0,
	  -7,  -9,
	   8,  -9,
	   8,  -3,
	   7,  -9,
	-128,   0};
static short ascii_115[ 64] = { 30, '\115', -12,  13,	/* M */
	  -7,  12,
	  -7,  -9,
	-128,   0,
	  -6,  12,
	   0,  -6,
	-128,   0,
	  -7,  12,
	   0,  -9,
	-128,   0,
	   7,  12,
	   0,  -9,
	-128,   0,
	   7,  12,
	   7,  -9,
	-128,   0,
	   8,  12,
	   8,  -9,
	-128,   0,
	 -10,  12,
	  -6,  12,
	-128,   0,
	   7,  12,
	  11,  12,
	-128,   0,
	 -10,  -9,
	  -4,  -9,
	-128,   0,
	   4,  -9,
	  11,  -9,
	-128,   0};
static short ascii_116[ 46] = { 21, '\116', -11,  12,	/* N */
	  -6,  12,
	  -6,  -9,
	-128,   0,
	  -5,  12,
	   7,  -7,
	-128,   0,
	  -5,  10,
	   7,  -9,
	-128,   0,
	   7,  12,
	   7,  -9,
	-128,   0,
	  -9,  12,
	  -5,  12,
	-128,   0,
	   4,  12,
	  10,  12,
	-128,   0,
	  -9,  -9,
	  -3,  -9,
	-128,   0};
static short ascii_117[ 92] = { 44, '\117', -11,  11,	/* O */
	  -1,  12,
	  -4,  11,
	  -6,   9,
	  -7,   7,
	  -8,   3,
	  -8,   0,
	  -7,  -4,
	  -6,  -6,
	  -4,  -8,
	  -1,  -9,
	   1,  -9,
	   4,  -8,
	   6,  -6,
	   7,  -4,
	   8,   0,
	   8,   3,
	   7,   7,
	   6,   9,
	   4,  11,
	   1,  12,
	  -1,  12,
	-128,   0,
	  -1,  12,
	  -3,  11,
	  -5,   9,
	  -6,   7,
	  -7,   3,
	  -7,   0,
	  -6,  -4,
	  -5,  -6,
	  -3,  -8,
	  -1,  -9,
	-128,   0,
	   1,  -9,
	   3,  -8,
	   5,  -6,
	   6,  -4,
	   7,   0,
	   7,   3,
	   6,   7,
	   5,   9,
	   3,  11,
	   1,  12,
	-128,   0};
static short ascii_120[ 62] = { 29, '\120', -11,  11,	/* P */
	  -6,  12,
	  -6,  -9,
	-128,   0,
	  -5,  12,
	  -5,  -9,
	-128,   0,
	  -9,  12,
	   3,  12,
	   6,  11,
	   7,  10,
	   8,   8,
	   8,   5,
	   7,   3,
	   6,   2,
	   3,   1,
	  -5,   1,
	-128,   0,
	   3,  12,
	   5,  11,
	   6,  10,
	   7,   8,
	   7,   5,
	   6,   3,
	   5,   2,
	   3,   1,
	-128,   0,
	  -9,  -9,
	  -2,  -9,
	-128,   0};
static short ascii_121[132] = { 64, '\121', -11,  11,	/* Q */
	  -1,  12,
	  -4,  11,
	  -6,   9,
	  -7,   7,
	  -8,   3,
	  -8,   0,
	  -7,  -4,
	  -6,  -6,
	  -4,  -8,
	  -1,  -9,
	   1,  -9,
	   4,  -8,
	   6,  -6,
	   7,  -4,
	   8,   0,
	   8,   3,
	   7,   7,
	   6,   9,
	   4,  11,
	   1,  12,
	  -1,  12,
	-128,   0,
	  -1,  12,
	  -3,  11,
	  -5,   9,
	  -6,   7,
	  -7,   3,
	  -7,   0,
	  -6,  -4,
	  -5,  -6,
	  -3,  -8,
	  -1,  -9,
	-128,   0,
	   1,  -9,
	   3,  -8,
	   5,  -6,
	   6,  -4,
	   7,   0,
	   7,   3,
	   6,   7,
	   5,   9,
	   3,  11,
	   1,  12,
	-128,   0,
	  -4,  -7,
	  -4,  -6,
	  -3,  -4,
	  -1,  -3,
	   0,  -3,
	   2,  -4,
	   3,  -6,
	   4, -13,
	   5, -14,
	   7, -14,
	   8, -12,
	   8, -11,
	-128,   0,
	   3,  -6,
	   4, -10,
	   5, -12,
	   6, -13,
	   7, -13,
	   8, -12,
	-128,   0};
static short ascii_122[ 94] = { 45, '\122', -11,  11,	/* R */
	  -6,  12,
	  -6,  -9,
	-128,   0,
	  -5,  12,
	  -5,  -9,
	-128,   0,
	  -9,  12,
	   3,  12,
	   6,  11,
	   7,  10,
	   8,   8,
	   8,   6,
	   7,   4,
	   6,   3,
	   3,   2,
	  -5,   2,
	-128,   0,
	   3,  12,
	   5,  11,
	   6,  10,
	   7,   8,
	   7,   6,
	   6,   4,
	   5,   3,
	   3,   2,
	-128,   0,
	  -9,  -9,
	  -2,  -9,
	-128,   0,
	   0,   2,
	   2,   1,
	   3,   0,
	   6,  -7,
	   7,  -8,
	   8,  -8,
	   9,  -7,
	-128,   0,
	   2,   1,
	   3,  -1,
	   5,  -8,
	   6,  -9,
	   8,  -9,
	   9,  -7,
	   9,  -6,
	-128,   0};
static short ascii_123[ 72] = { 34, '\123', -10,  10,	/* S */
	   6,   9,
	   7,  12,
	   7,   6,
	   6,   9,
	   4,  11,
	   1,  12,
	  -2,  12,
	  -5,  11,
	  -7,   9,
	  -7,   7,
	  -6,   5,
	  -5,   4,
	  -3,   3,
	   3,   1,
	   5,   0,
	   7,  -2,
	-128,   0,
	  -7,   7,
	  -5,   5,
	  -3,   4,
	   3,   2,
	   5,   1,
	   6,   0,
	   7,  -2,
	   7,  -6,
	   5,  -8,
	   2,  -9,
	  -1,  -9,
	  -4,  -8,
	  -6,  -6,
	  -7,  -3,
	  -7,  -9,
	  -6,  -6,
	-128,   0};
static short ascii_124[ 36] = { 16, '\124',  -9,  10,	/* T */
	   0,  12,
	   0,  -9,
	-128,   0,
	   1,  12,
	   1,  -9,
	-128,   0,
	  -6,  12,
	  -7,   6,
	  -7,  12,
	   8,  12,
	   8,   6,
	   7,  12,
	-128,   0,
	  -3,  -9,
	   4,  -9,
	-128,   0};
static short ascii_125[ 50] = { 23, '\125', -12,  12,	/* U */
	  -7,  12,
	  -7,  -3,
	  -6,  -6,
	  -4,  -8,
	  -1,  -9,
	   1,  -9,
	   4,  -8,
	   6,  -6,
	   7,  -3,
	   7,  12,
	-128,   0,
	  -6,  12,
	  -6,  -3,
	  -5,  -6,
	  -3,  -8,
	  -1,  -9,
	-128,   0,
	 -10,  12,
	  -3,  12,
	-128,   0,
	   4,  12,
	  10,  12,
	-128,   0};
static short ascii_126[ 34] = { 15, '\126', -10,  10,	/* V */
	  -7,  12,
	   0,  -9,
	-128,   0,
	  -6,  12,
	   0,  -6,
	-128,   0,
	   7,  12,
	   0,  -9,
	-128,   0,
	  -9,  12,
	  -3,  12,
	-128,   0,
	   3,  12,
	   9,  12,
	-128,   0};
static short ascii_127[ 52] = { 24, '\127', -12,  12,	/* W */
	  -8,  12,
	  -4,  -9,
	-128,   0,
	  -7,  12,
	  -4,  -4,
	-128,   0,
	   0,  12,
	  -4,  -9,
	-128,   0,
	   0,  12,
	   4,  -9,
	-128,   0,
	   1,  12,
	   4,  -4,
	-128,   0,
	   8,  12,
	   4,  -9,
	-128,   0,
	 -11,  12,
	  -4,  12,
	-128,   0,
	   5,  12,
	  11,  12,
	-128,   0};
static short ascii_130[ 46] = { 21, '\130', -10,  10,	/* X */
	  -7,  12,
	   6,  -9,
	-128,   0,
	  -6,  12,
	   7,  -9,
	-128,   0,
	   7,  12,
	  -7,  -9,
	-128,   0,
	  -9,  12,
	  -3,  12,
	-128,   0,
	   3,  12,
	   9,  12,
	-128,   0,
	  -9,  -9,
	  -3,  -9,
	-128,   0,
	   3,  -9,
	   9,  -9,
	-128,   0};
static short ascii_131[ 44] = { 20, '\131', -10,  11,	/* Y */
	  -7,  12,
	   0,   1,
	   0,  -9,
	-128,   0,
	  -6,  12,
	   1,   1,
	   1,  -9,
	-128,   0,
	   8,  12,
	   1,   1,
	-128,   0,
	  -9,  12,
	  -3,  12,
	-128,   0,
	   4,  12,
	  10,  12,
	-128,   0,
	  -3,  -9,
	   4,  -9,
	-128,   0};
static short ascii_132[ 36] = { 16, '\132', -10,  10,	/* Z */
	   6,  12,
	  -7,  -9,
	-128,   0,
	   7,  12,
	  -6,  -9,
	-128,   0,
	  -6,  12,
	  -7,   6,
	  -7,  12,
	   7,  12,
	-128,   0,
	  -7,  -9,
	   7,  -9,
	   7,  -3,
	   6,  -9,
	-128,   0};
static short ascii_133[ 28] = { 12, '\133',  -7,   7,	/* [ */
	  -3,  16,
	  -3, -16,
	-128,   0,
	  -2,  16,
	  -2, -16,
	-128,   0,
	  -3,  16,
	   4,  16,
	-128,   0,
	  -3, -16,
	   4, -16,
	-128,   0};
static short ascii_134[ 10] = {  3, '\134', -11,  11,	/* \ */
	  -9,  16,
	   9, -16,
	-128,   0};
static short ascii_135[ 28] = { 12, '\135',  -7,   7,	/* ] */
	   2,  16,
	   2, -16,
	-128,   0,
	   3,  16,
	   3, -16,
	-128,   0,
	  -4,  16,
	   3,  16,
	-128,   0,
	  -4, -16,
	   3, -16,
	-128,   0};
static short ascii_136[ 16] = {  6, '\136',  -8,   8,	/* ^ */
	   0,  14,
	  -8,   0,
	-128,   0,
	   0,  14,
	   8,   0,
	-128,   0};
static short ascii_137[ 10] = {  3, '\137', -10,  10,	/* _ */
	 -10, -11,
	  10, -11,
	-128,   0};
static short ascii_140[ 20] = {  8, '\140',  -5,   5,	/* ` */
	   0,  10,
	   1,  11,
	   0,  12,
	  -1,  11,
	  -1,   9,
	   0,   7,
	   1,   6,
	-128,   0};
static short ascii_141[ 82] = { 39, '\141',  -9,  11,	/* a */
	  -4,   3,
	  -4,   2,
	  -5,   2,
	  -5,   3,
	  -4,   4,
	  -2,   5,
	   2,   5,
	   4,   4,
	   5,   3,
	   6,   1,
	   6,  -6,
	   7,  -8,
	   8,  -9,
	-128,   0,
	   5,   3,
	   5,  -6,
	   6,  -8,
	   8,  -9,
	   9,  -9,
	-128,   0,
	   5,   1,
	   4,   0,
	  -2,  -1,
	  -5,  -2,
	  -6,  -4,
	  -6,  -6,
	  -5,  -8,
	  -2,  -9,
	   1,  -9,
	   3,  -8,
	   5,  -6,
	-128,   0,
	  -2,  -1,
	  -4,  -2,
	  -5,  -4,
	  -5,  -6,
	  -4,  -8,
	  -2,  -9,
	-128,   0};
static short ascii_142[ 70] = { 33, '\142', -11,  10,	/* b */
	  -6,  12,
	  -6,  -9,
	-128,   0,
	  -5,  12,
	  -5,  -9,
	-128,   0,
	  -5,   2,
	  -3,   4,
	  -1,   5,
	   1,   5,
	   4,   4,
	   6,   2,
	   7,  -1,
	   7,  -3,
	   6,  -6,
	   4,  -8,
	   1,  -9,
	  -1,  -9,
	  -3,  -8,
	  -5,  -6,
	-128,   0,
	   1,   5,
	   3,   4,
	   5,   2,
	   6,  -1,
	   6,  -3,
	   5,  -6,
	   3,  -8,
	   1,  -9,
	-128,   0,
	  -9,  12,
	  -5,  12,
	-128,   0};
static short ascii_143[ 60] = { 28, '\143', -10,   9,	/* c */
	   5,   2,
	   4,   1,
	   5,   0,
	   6,   1,
	   6,   2,
	   4,   4,
	   2,   5,
	  -1,   5,
	  -4,   4,
	  -6,   2,
	  -7,  -1,
	  -7,  -3,
	  -6,  -6,
	  -4,  -8,
	  -1,  -9,
	   1,  -9,
	   4,  -8,
	   6,  -6,
	-128,   0,
	  -1,   5,
	  -3,   4,
	  -5,   2,
	  -6,  -1,
	  -6,  -3,
	  -5,  -6,
	  -3,  -8,
	  -1,  -9,
	-128,   0};
static short ascii_144[ 76] = { 36, '\144', -10,  11,	/* d */
	   5,  12,
	   5,  -9,
	-128,   0,
	   6,  12,
	   6,  -9,
	-128,   0,
	   5,   2,
	   3,   4,
	   1,   5,
	  -1,   5,
	  -4,   4,
	  -6,   2,
	  -7,  -1,
	  -7,  -3,
	  -6,  -6,
	  -4,  -8,
	  -1,  -9,
	   1,  -9,
	   3,  -8,
	   5,  -6,
	-128,   0,
	  -1,   5,
	  -3,   4,
	  -5,   2,
	  -6,  -1,
	  -6,  -3,
	  -5,  -6,
	  -3,  -8,
	  -1,  -9,
	-128,   0,
	   2,  12,
	   6,  12,
	-128,   0,
	   5,  -9,
	   9,  -9,
	-128,   0};
static short ascii_145[ 66] = { 31, '\145', -10,   9,	/* e */
	  -6,  -1,
	   6,  -1,
	   6,   1,
	   5,   3,
	   4,   4,
	   2,   5,
	  -1,   5,
	  -4,   4,
	  -6,   2,
	  -7,  -1,
	  -7,  -3,
	  -6,  -6,
	  -4,  -8,
	  -1,  -9,
	   1,  -9,
	   4,  -8,
	   6,  -6,
	-128,   0,
	   5,  -1,
	   5,   2,
	   4,   4,
	-128,   0,
	  -1,   5,
	  -3,   4,
	  -5,   2,
	  -6,  -1,
	  -6,  -3,
	  -5,  -6,
	  -3,  -8,
	  -1,  -9,
	-128,   0};
static short ascii_146[ 48] = { 22, '\146',  -7,   6,	/* f */
	   3,  11,
	   2,  10,
	   3,   9,
	   4,  10,
	   4,  11,
	   3,  12,
	   1,  12,
	  -1,  11,
	  -2,   9,
	  -2,  -9,
	-128,   0,
	   1,  12,
	   0,  11,
	  -1,   9,
	  -1,  -9,
	-128,   0,
	  -5,   5,
	   3,   5,
	-128,   0,
	  -5,  -9,
	   2,  -9,
	-128,   0};
static short ascii_147[124] = { 60, '\147',  -9,  10,	/* g */
	  -1,   5,
	  -3,   4,
	  -4,   3,
	  -5,   1,
	  -5,  -1,
	  -4,  -3,
	  -3,  -4,
	  -1,  -5,
	   1,  -5,
	   3,  -4,
	   4,  -3,
	   5,  -1,
	   5,   1,
	   4,   3,
	   3,   4,
	   1,   5,
	  -1,   5,
	-128,   0,
	  -3,   4,
	  -4,   2,
	  -4,  -2,
	  -3,  -4,
	-128,   0,
	   3,  -4,
	   4,  -2,
	   4,   2,
	   3,   4,
	-128,   0,
	   4,   3,
	   5,   4,
	   7,   5,
	   7,   4,
	   5,   4,
	-128,   0,
	  -4,  -3,
	  -5,  -4,
	  -6,  -6,
	  -6,  -7,
	  -5,  -9,
	  -2, -10,
	   3, -10,
	   6, -11,
	   7, -12,
	-128,   0,
	  -6,  -7,
	  -5,  -8,
	  -2,  -9,
	   3,  -9,
	   6, -10,
	   7, -12,
	   7, -13,
	   6, -15,
	   3, -16,
	  -3, -16,
	  -6, -15,
	  -7, -13,
	  -7, -12,
	  -6, -10,
	  -3,  -9,
	-128,   0};
static short ascii_150[ 60] = { 28, '\150', -11,  11,	/* h */
	  -6,  12,
	  -6,  -9,
	-128,   0,
	  -5,  12,
	  -5,  -9,
	-128,   0,
	  -5,   2,
	  -3,   4,
	   0,   5,
	   2,   5,
	   5,   4,
	   6,   2,
	   6,  -9,
	-128,   0,
	   2,   5,
	   4,   4,
	   5,   2,
	   5,  -9,
	-128,   0,
	  -9,  12,
	  -5,  12,
	-128,   0,
	  -9,  -9,
	  -2,  -9,
	-128,   0,
	   2,  -9,
	   9,  -9,
	-128,   0};
static short ascii_151[ 40] = { 18, '\151',  -5,   6,	/* i */
	   0,  12,
	  -1,  11,
	   0,  10,
	   1,  11,
	   0,  12,
	-128,   0,
	   0,   5,
	   0,  -9,
	-128,   0,
	   1,   5,
	   1,  -9,
	-128,   0,
	  -3,   5,
	   1,   5,
	-128,   0,
	  -3,  -9,
	   4,  -9,
	-128,   0};
static short ascii_152[ 54] = { 25, '\152',  -5,   6,	/* j */
	   1,  12,
	   0,  11,
	   1,  10,
	   2,  11,
	   1,  12,
	-128,   0,
	   2,   5,
	   2, -13,
	   1, -15,
	  -1, -16,
	  -3, -16,
	  -4, -15,
	  -4, -14,
	  -3, -13,
	  -2, -14,
	  -3, -15,
	-128,   0,
	   1,   5,
	   1, -13,
	   0, -15,
	  -1, -16,
	-128,   0,
	  -2,   5,
	   2,   5,
	-128,   0};
static short ascii_153[ 58] = { 27, '\153', -11,  10,	/* k */
	  -6,  12,
	  -6,  -9,
	-128,   0,
	  -5,  12,
	  -5,  -9,
	-128,   0,
	   5,   5,
	  -5,  -5,
	-128,   0,
	   0,  -1,
	   6,  -9,
	-128,   0,
	  -1,  -1,
	   5,  -9,
	-128,   0,
	  -9,  12,
	  -5,  12,
	-128,   0,
	   2,   5,
	   8,   5,
	-128,   0,
	  -9,  -9,
	  -2,  -9,
	-128,   0,
	   2,  -9,
	   8,  -9,
	-128,   0};
static short ascii_154[ 28] = { 12, '\154',  -5,   6,	/* l */
	   0,  12,
	   0,  -9,
	-128,   0,
	   1,  12,
	   1,  -9,
	-128,   0,
	  -3,  12,
	   1,  12,
	-128,   0,
	  -3,  -9,
	   4,  -9,
	-128,   0};
static short ascii_155[ 92] = { 44, '\155', -16,  17,	/* m */
	 -11,   5,
	 -11,  -9,
	-128,   0,
	 -10,   5,
	 -10,  -9,
	-128,   0,
	 -10,   2,
	  -8,   4,
	  -5,   5,
	  -3,   5,
	   0,   4,
	   1,   2,
	   1,  -9,
	-128,   0,
	  -3,   5,
	  -1,   4,
	   0,   2,
	   0,  -9,
	-128,   0,
	   1,   2,
	   3,   4,
	   6,   5,
	   8,   5,
	  11,   4,
	  12,   2,
	  12,  -9,
	-128,   0,
	   8,   5,
	  10,   4,
	  11,   2,
	  11,  -9,
	-128,   0,
	 -14,   5,
	 -10,   5,
	-128,   0,
	 -14,  -9,
	  -7,  -9,
	-128,   0,
	  -3,  -9,
	   4,  -9,
	-128,   0,
	   8,  -9,
	  15,  -9,
	-128,   0};
static short ascii_156[ 60] = { 28, '\156', -11,  11,	/* n */
	  -6,   5,
	  -6,  -9,
	-128,   0,
	  -5,   5,
	  -5,  -9,
	-128,   0,
	  -5,   2,
	  -3,   4,
	   0,   5,
	   2,   5,
	   5,   4,
	   6,   2,
	   6,  -9,
	-128,   0,
	   2,   5,
	   4,   4,
	   5,   2,
	   5,  -9,
	-128,   0,
	  -9,   5,
	  -5,   5,
	-128,   0,
	  -9,  -9,
	  -2,  -9,
	-128,   0,
	   2,  -9,
	   9,  -9,
	-128,   0};
static short ascii_157[ 76] = { 36, '\157', -10,  10,	/* o */
	  -1,   5,
	  -4,   4,
	  -6,   2,
	  -7,  -1,
	  -7,  -3,
	  -6,  -6,
	  -4,  -8,
	  -1,  -9,
	   1,  -9,
	   4,  -8,
	   6,  -6,
	   7,  -3,
	   7,  -1,
	   6,   2,
	   4,   4,
	   1,   5,
	  -1,   5,
	-128,   0,
	  -1,   5,
	  -3,   4,
	  -5,   2,
	  -6,  -1,
	  -6,  -3,
	  -5,  -6,
	  -3,  -8,
	  -1,  -9,
	-128,   0,
	   1,  -9,
	   3,  -8,
	   5,  -6,
	   6,  -3,
	   6,  -1,
	   5,   2,
	   3,   4,
	   1,   5,
	-128,   0};
static short ascii_160[ 76] = { 36, '\160', -11,  10,	/* p */
	  -6,   5,
	  -6, -16,
	-128,   0,
	  -5,   5,
	  -5, -16,
	-128,   0,
	  -5,   2,
	  -3,   4,
	  -1,   5,
	   1,   5,
	   4,   4,
	   6,   2,
	   7,  -1,
	   7,  -3,
	   6,  -6,
	   4,  -8,
	   1,  -9,
	  -1,  -9,
	  -3,  -8,
	  -5,  -6,
	-128,   0,
	   1,   5,
	   3,   4,
	   5,   2,
	   6,  -1,
	   6,  -3,
	   5,  -6,
	   3,  -8,
	   1,  -9,
	-128,   0,
	  -9,   5,
	  -5,   5,
	-128,   0,
	  -9, -16,
	  -2, -16,
	-128,   0};
static short ascii_161[ 70] = { 33, '\161', -10,  10,	/* q */
	   5,   5,
	   5, -16,
	-128,   0,
	   6,   5,
	   6, -16,
	-128,   0,
	   5,   2,
	   3,   4,
	   1,   5,
	  -1,   5,
	  -4,   4,
	  -6,   2,
	  -7,  -1,
	  -7,  -3,
	  -6,  -6,
	  -4,  -8,
	  -1,  -9,
	   1,  -9,
	   3,  -8,
	   5,  -6,
	-128,   0,
	  -1,   5,
	  -3,   4,
	  -5,   2,
	  -6,  -1,
	  -6,  -3,
	  -5,  -6,
	  -3,  -8,
	  -1,  -9,
	-128,   0,
	   2, -16,
	   9, -16,
	-128,   0};
static short ascii_162[ 50] = { 23, '\162',  -9,   8,	/* r */
	  -4,   5,
	  -4,  -9,
	-128,   0,
	  -3,   5,
	  -3,  -9,
	-128,   0,
	  -3,  -1,
	  -2,   2,
	   0,   4,
	   2,   5,
	   5,   5,
	   6,   4,
	   6,   3,
	   5,   2,
	   4,   3,
	   5,   4,
	-128,   0,
	  -7,   5,
	  -3,   5,
	-128,   0,
	  -7,  -9,
	   0,  -9,
	-128,   0};
static short ascii_163[ 68] = { 32, '\163',  -8,   9,	/* s */
	   5,   3,
	   6,   5,
	   6,   1,
	   5,   3,
	   4,   4,
	   2,   5,
	  -2,   5,
	  -4,   4,
	  -5,   3,
	  -5,   1,
	  -4,   0,
	  -2,  -1,
	   3,  -3,
	   5,  -4,
	   6,  -5,
	-128,   0,
	  -5,   2,
	  -4,   1,
	  -2,   0,
	   3,  -2,
	   5,  -3,
	   6,  -4,
	   6,  -7,
	   5,  -8,
	   3,  -9,
	  -1,  -9,
	  -3,  -8,
	  -4,  -7,
	  -5,  -5,
	  -5,  -9,
	  -4,  -7,
	-128,   0};
static short ascii_164[ 36] = { 16, '\164',  -7,   8,	/* t */
	  -2,  12,
	  -2,  -5,
	  -1,  -8,
	   1,  -9,
	   3,  -9,
	   5,  -8,
	   6,  -6,
	-128,   0,
	  -1,  12,
	  -1,  -5,
	   0,  -8,
	   1,  -9,
	-128,   0,
	  -5,   5,
	   3,   5,
	-128,   0};
static short ascii_165[ 60] = { 28, '\165', -11,  11,	/* u */
	  -6,   5,
	  -6,  -6,
	  -5,  -8,
	  -2,  -9,
	   0,  -9,
	   3,  -8,
	   5,  -6,
	-128,   0,
	  -5,   5,
	  -5,  -6,
	  -4,  -8,
	  -2,  -9,
	-128,   0,
	   5,   5,
	   5,  -9,
	-128,   0,
	   6,   5,
	   6,  -9,
	-128,   0,
	  -9,   5,
	  -5,   5,
	-128,   0,
	   2,   5,
	   6,   5,
	-128,   0,
	   5,  -9,
	   9,  -9,
	-128,   0};
static short ascii_166[ 34] = { 15, '\166',  -9,   9,	/* v */
	  -6,   5,
	   0,  -9,
	-128,   0,
	  -5,   5,
	   0,  -7,
	-128,   0,
	   6,   5,
	   0,  -9,
	-128,   0,
	  -8,   5,
	  -2,   5,
	-128,   0,
	   2,   5,
	   8,   5,
	-128,   0};
static short ascii_167[ 52] = { 24, '\167', -12,  12,	/* w */
	  -8,   5,
	  -4,  -9,
	-128,   0,
	  -7,   5,
	  -4,  -6,
	-128,   0,
	   0,   5,
	  -4,  -9,
	-128,   0,
	   0,   5,
	   4,  -9,
	-128,   0,
	   1,   5,
	   4,  -6,
	-128,   0,
	   8,   5,
	   4,  -9,
	-128,   0,
	 -11,   5,
	  -4,   5,
	-128,   0,
	   5,   5,
	  11,   5,
	-128,   0};
static short ascii_170[ 46] = { 21, '\170', -10,  10,	/* x */
	  -6,   5,
	   5,  -9,
	-128,   0,
	  -5,   5,
	   6,  -9,
	-128,   0,
	   6,   5,
	  -6,  -9,
	-128,   0,
	  -8,   5,
	  -2,   5,
	-128,   0,
	   2,   5,
	   8,   5,
	-128,   0,
	  -8,  -9,
	  -2,  -9,
	-128,   0,
	   2,  -9,
	   8,  -9,
	-128,   0};
static short ascii_171[ 48] = { 22, '\171', -10,   9,	/* y */
	  -6,   5,
	   0,  -9,
	-128,   0,
	  -5,   5,
	   0,  -7,
	-128,   0,
	   6,   5,
	   0,  -9,
	  -2, -13,
	  -4, -15,
	  -6, -16,
	  -7, -16,
	  -8, -15,
	  -7, -14,
	  -6, -15,
	-128,   0,
	  -8,   5,
	  -2,   5,
	-128,   0,
	   2,   5,
	   8,   5,
	-128,   0};
static short ascii_172[ 36] = { 16, '\172',  -9,   9,	/* z */
	   5,   5,
	  -6,  -9,
	-128,   0,
	   6,   5,
	  -5,  -9,
	-128,   0,
	  -5,   5,
	  -6,   1,
	  -6,   5,
	   6,   5,
	-128,   0,
	  -6,  -9,
	   6,  -9,
	   6,  -5,
	   5,  -9,
	-128,   0};
static short ascii_173[ 60] = { 28, '\173',  -7,   7,	/* { */
	   2,  16,
	  -1,  13,
	  -2,  10,
	  -2,   8,
	  -1,   5,
	   2,   2,
	-128,   0,
	   0,  14,
	  -1,  11,
	  -1,   7,
	   0,   4,
	-128,   0,
	   2,   2,
	  -1,   0,
	   2,  -2,
	-128,   0,
	   2,  -2,
	  -1,  -5,
	  -2,  -8,
	  -2, -10,
	  -1, -13,
	   2, -16,
	-128,   0,
	   0,  -4,
	  -1,  -7,
	  -1, -11,
	   0, -14,
	-128,   0};
static short ascii_174[ 10] = {  3, '\174',  -4,   4,	/* | */
	   0,  16,
	   0, -16,
	-128,   0};
static short ascii_175[ 60] = { 28, '\175',  -7,   7,	/* } */
	  -2,  16,
	   1,  13,
	   2,  10,
	   2,   8,
	   1,   5,
	  -2,   2,
	-128,   0,
	   0,  14,
	   1,  11,
	   1,   7,
	   0,   4,
	-128,   0,
	  -2,   2,
	   1,   0,
	  -2,  -2,
	-128,   0,
	  -2,  -2,
	   1,  -5,
	   2,  -8,
	   2, -10,
	   1, -13,
	  -2, -16,
	-128,   0,
	   0,  -4,
	   1,  -7,
	   1, -11,
	   0, -14,
	-128,   0};
static short ascii_176[ 52] = { 24, '\176', -12,  12,	/* ~ */
	  -9,  -3,
	  -9,  -1,
	  -8,   2,
	  -6,   3,
	  -4,   3,
	  -2,   2,
	   2,  -1,
	   4,  -2,
	   6,  -2,
	   8,  -1,
	   9,   1,
	-128,   0,
	  -9,  -1,
	  -8,   1,
	  -6,   2,
	  -4,   2,
	  -2,   1,
	   2,  -2,
	   4,  -3,
	   6,  -3,
	   8,  -2,
	   9,   1,
	   9,   3,
	-128,   0};
static short ascii_177[  6] = {  1, '\177',  -8,   8,	/*  */
	-128,   0};

/*	Stroke Table	*/

short *Gt_sf_0[128] = {
	size, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, ascii_027, 0, 0, 0, 0, 0, 0, 0, 0, 
	ascii_040, ascii_041, ascii_042, ascii_043,
	ascii_044, ascii_045, ascii_046, ascii_047,
	ascii_050, ascii_051, ascii_052, ascii_053,
	ascii_054, ascii_055, ascii_056, ascii_057,
	ascii_060, ascii_061, ascii_062, ascii_063,
	ascii_064, ascii_065, ascii_066, ascii_067,
	ascii_070, ascii_071, ascii_072, ascii_073,
	ascii_074, ascii_075, ascii_076, ascii_077,
	ascii_100, ascii_101, ascii_102, ascii_103,
	ascii_104, ascii_105, ascii_106, ascii_107,
	ascii_110, ascii_111, ascii_112, ascii_113,
	ascii_114, ascii_115, ascii_116, ascii_117,
	ascii_120, ascii_121, ascii_122, ascii_123,
	ascii_124, ascii_125, ascii_126, ascii_127,
	ascii_130, ascii_131, ascii_132, ascii_133,
	ascii_134, ascii_135, ascii_136, ascii_137,
	ascii_140, ascii_141, ascii_142, ascii_143,
	ascii_144, ascii_145, ascii_146, ascii_147,
	ascii_150, ascii_151, ascii_152, ascii_153,
	ascii_154, ascii_155, ascii_156, ascii_157,
	ascii_160, ascii_161, ascii_162, ascii_163,
	ascii_164, ascii_165, ascii_166, ascii_167,
	ascii_170, ascii_171, ascii_172, ascii_173,
	ascii_174, ascii_175, ascii_176, ascii_177
	}; 
