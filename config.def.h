/* user and group to drop privileges to */
static const char *user  = "hatter";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[BG] =     "#181617",     /* background */
	[INIT] =   "#181617",   /* after initialization */
	[INPUT] =  "#6535FF",   /* during input */
	[FAILED] = "#D4004D",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*
* Shapes:
* 0: square
* 1: circle
*/
static const int shape = 0;
/* size of square in px */
static const int shapesize = 25;
static const int shapegap = 15;
