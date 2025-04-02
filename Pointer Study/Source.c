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

	 printf("ch 의 값 : %c \n", *&ch);
	 printf("in 의 값 : %d\n", *&in);
	 printf("db 의 값 : %f\n", *&db);
	// printf("ch 의 값 : \n", *&ch);
	// printf("in 의 값 : \n", *&in);
	// printf("db 의 값 : \n", *&db);
}