//Modify this file to change what commands output to your statusbar, and recompile using the make command.
// https://fontawesome.com/cheatsheet?from=io
// https://www.nerdfonts.com/cheat-sheet

#define SCRIPTDIR "~/.local/bin/dwmblocks_scripts/"

static const Block blocks[] = {
	/*Icon*/	    /*Command*/									                   /*Update Interval*/	   /*Update Signal*/

	{"",            SCRIPTDIR "music",								0,					1},
	//{"",            SCRIPTDIR "taskblocklet",						0,					3},
	{"",            SCRIPTDIR "todo",							    300,				3},
	//{"",            SCRIPTDIR "news",								0,					6},
	//{"",            SCRIPTDIR "mailbox",							180,				12},
	{"",            SCRIPTDIR "cpu_usage",							15,					0},
	{"",            SCRIPTDIR "disk_usage",							600,				0},
	//{"",            SCRIPTDIR "package_updates",						18000,				0},
	{"",            SCRIPTDIR "uptime",			                    60,					0},
	{"",			SCRIPTDIR "weatherreport",						18000,				5},
	{"",			SCRIPTDIR "internet",							30,					0},
	{"",            SCRIPTDIR "volume",								0,					2},
	{"",            SCRIPTDIR "betterbattery",						10,					0},
	{"",            SCRIPTDIR "showcalendar",						3600,				0},
	{"",            SCRIPTDIR "clock",								30,					0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
