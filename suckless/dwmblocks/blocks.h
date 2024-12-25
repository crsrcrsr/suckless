//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "sensors | grep Core | awk '{print $3}'",                          10,             0},
	{" Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{" ip:", " ip -o address | grep wlp3s0 |grep inet |awk '{print $4;exit}'",10,           0},
	{" ", "date '+%d%m %R'",					        5,		0},
	{" ", "acpi | awk '{print $4 $3 $5}'",				5,		0},
}	;

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " |";
static unsigned int delimLen = 5;
