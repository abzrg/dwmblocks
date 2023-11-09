//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	{"",     "dwmblocks_layout.sh",                                     0,  2},
	{"",     "dwmblocks_volume.sh",                                     0,  3},
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 10, 0},
	{"",     "uptime | awk '{print $9}' | sed 's/,//'",                 1,  0},
	{"",     "dwmblocks_datetime.sh",                                   5,  0},
	{"",     "printf '~~~~~'",                                          5,  0}, // my monitor is dead in a corner
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
