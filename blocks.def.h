//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "rofi-bluetooth --status", 10, 0},
	{"", "w=$(nmcli connection show --active | grep wifi | awk '{print $1}'); [[ -z $w ]] && echo 睊 || echo 直 $w", 5, 0},
	{"Vol: ", "echo \"$(pamixer --get-volume)%\"", 5, 0},
	{"Bat: ", "b=$(acpi -b | grep -Eo '[0-9]{1,}%'); [[ -z $b ]] && b=NC; echo $b", 60, 0},
	{"", "date '+%d/%m (%a) [%R]'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
