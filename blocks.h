//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/									/*Update Interval*/				/*Update Signal*/
	

	// https://fontawesome.com/cheatsheet?from=io

	{"",            "~/.local/bin/dwmblocks_scripts/music",									0,					1},
	{"",            "~/.local/bin/dwmblocks_scripts/clock",									30,					0},
	{"",            "~/.local/bin/dwmblocks_scripts/showcalendar",							3600,				0},
	{"",            "~/.local/bin/dwmblocks_scripts/taskblocklet",							0,					3},
	{"",            "~/.local/bin/dwmblocks_scripts/news",									0,					6},
	{"",            "~/.local/bin/dwmblocks_scripts/volume",									0,					2},
	{"",            "~/.local/bin/dwmblocks_scripts/mailbox",								180,				12},
	{"",            "~/.local/bin/dwmblocks_scripts/betterbattery",							10,					0},
	{"",			"~/.local/bin/dwmblocks_scripts/internet",								30,					0},
	{"CPU: ",       "~/.local/bin/dwmblocks_scripts/cpu_usage",								15,					0},
	{"Disk: ",      "~/.local/bin/dwmblocks_scripts/disk_usage",								600,				0},
	{"",            "uptime -p | sed 's/hours/h/; s/minutes/min/; s/seconds/sec/'",			60,					0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
