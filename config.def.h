/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#222222",   /* during input */
	[FAILED] = "#772211",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Void | Password:";

/* text color */
static const char * text_color = "#772211";

/* text size (must be a valid size) */
static const char * font_name = "10x20";
