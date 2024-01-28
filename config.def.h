/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                     /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 248;     /* Amount of opacity. 0xff is opaque             */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"ComicCode Nerd Font:size=12"
};
static const char *prompt = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#c8d3f5", "#222436" },
	[SchemeSel] =  { "#222436", "#82aaff" },
	[SchemeOut] =  { "#c3e88d", "#222436" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] =  { OPAQUE, alpha },
	[SchemeOut] =  { OPAQUE, alpha },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " `'\"()[]{},;";

/* Size of the window border */
static unsigned int border_width = 2;
