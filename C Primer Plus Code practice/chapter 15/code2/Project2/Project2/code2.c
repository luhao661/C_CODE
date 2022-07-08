#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#if 0
//复习题
//7.a
struct muban1							//从右往左填充结构位字段，即把第一位字段载入最低位。
{
	unsigned int ruanpan : 2;
	unsigned int : 1;
	unsigned int CD_ROM : 2;
	unsigned int : 1;
	unsigned int yinban : 2;
};
//7.b
struct muban2							//从左往右填充结构位字段，即把第一位字段载入最高位。
{
	unsigned int yinban : 2;
	unsigned int : 1;
	unsigned int CD_ROM : 2;
	unsigned int : 1;
	unsigned int ruanpan : 2;
};
#endif