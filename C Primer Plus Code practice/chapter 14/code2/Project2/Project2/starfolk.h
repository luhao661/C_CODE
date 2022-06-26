#define _CRT_SECURE_NO_WARNINGS 1
struct name
{
	char first[20];
	char last[20];
};

struct bem
{
	int limbs;
	struct name title;
	char type[30];
};

struct bem* pb;
struct bem deb =
{
6,
{"Berbnazel","Gwolkapwolk"},
"Arcturan"
};