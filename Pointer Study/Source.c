#include <stdio.h>

int main()
{
	char ch = 'A';
	int in = 10;
	double db = 3.4;

	char* pa;
	int* pb;
	double* pc;
	pa = &ch;
	*pa = 'B';

	pb = &in;
	*pb= 20;

	pc = &db;
	*pc = 5.5;

	 printf("ch �� �� : %c \n", *&ch);
	 printf("in �� �� : %d\n", *&in);
	 printf("db �� �� : %f\n", *&db);
	// printf("ch �� �� : \n", *&ch);
	// printf("in �� �� : \n", *&in);
	// printf("db �� �� : \n", *&db);
}