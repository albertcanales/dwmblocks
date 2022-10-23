#define script(file) "$HOME/dotfiles/dwmblocks/scripts/" #file

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"", 		script("bluetooth.sh"),			5,		0},
	{"", 		script("wifi.sh"),				2,		0},
//	{"", 		script("volume.sh"),			2,		0},
//	{"", 		script("battery.sh"),			30,		0},
	{"", 		script("date.sh"),				20,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
