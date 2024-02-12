#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc(const void* a, const void* b)
{
	return (*(char*) a - *(char*) b);
}

int main(void)
{
	char napis[100];
	gets(napis);
	qsort(napis, strlen(napis), sizeof(char), cmpfunc);
	puts(napis);

	return 0;
}