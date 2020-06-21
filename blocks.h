//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/									/*Update Interval*/				/*Update Signal*/
	

	{"", "~/.local/bin/bar_scripts/music",									0,					1},
	//{"", "xfce4-terminal -e english_to_danish --hold --drop-down",			0,					0},
	//{"", "xfce4-terminal -e danish_to_english --hold --drop-down",			0,					0},
	{"", "~/.local/bin/bar_scripts/clock",									30,					0},
	{"", "~/.local/bin/bar_scripts/showcalendar",							3600,				0},
	{"", "~/.local/bin/bar_scripts/mailbox",								180,				12},
	{"", "~/.local/bin/bar_scripts/taskblocklet",							0,					3},
	{"", "~/.local/bin/bar_scripts/news",									0,					6},
	{"", "~/.local/bin/bar_scripts/volume",									0,					2},
	{"", "~/.local/bin/bar_scripts/betterbattery",							10,					0},
	{"", "~/.local/bin/bar_scripts/internet",								30,					0},
	{"", "~/.local/bin/bar_scripts/weatherreport",							18000,				5},
	{"", "~/.local/bin/bar_scripts/keyindicator",							0,					11},
	{"💻", "~/.local/bin/bar_scripts/cpu_usage",							15,					0},
	{"📁", "~/.local/bin/bar_scripts/disk_usage",							600,				0},
	{"⏱️", "uptime -p | sed 's/hours/h/; s/minutes/min/; s/seconds/sec/'",	60,					0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "|";
