/* user and group to drop privileges to */
static const char *user  = "gerry";
static const char *group = "gerry";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#222222",     /* after initialization */
	[INPUT] =  "#004466",   /* during input */
	[FAILED] = "#AA2222",   /* wrong password */
	[CAPS] = "#44CC66",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 4;
