#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#if 1
static unsigned long int next = 1;//��������

unsigned int rand1(void)
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}
void seed_to_next(unsigned int seed)
{
	next = seed;
}
#endif