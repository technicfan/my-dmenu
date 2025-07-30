/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy  = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static const unsigned int alpha = 0xff;     /* Amount of opacity. 0xff is opaque             */
static int draw_input = 1;                  /* -noi option; if 0, the input will not be drawn by default */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Terminus:pixelsize=14"
};
static const char *prompt = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#d3869b", "#282828" },
	[SchemeSel] = { "#a9b665", "#282828" },
	[SchemeSelHighlight] = { "#e78a4e", "#282828" },
	[SchemeNormHighlight] = { "#dfbf8e", "#282828" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeSelHighlight] = { OPAQUE, alpha },
	[SchemeNormHighlight] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 25;
static unsigned int min_lineheight = 8;

static int dmx = 0;
static int dmy = 0;
static unsigned dmw = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
