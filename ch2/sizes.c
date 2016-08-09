/*
Write a program to determine the ranges of char, short, int, and long variables, 
both signed and unsigned, by printing appropriate values from standard headers 
and by direct computation. Harder if you compute them: determine the ranges of
 the various floating-point types.
*/

#include <stdio.h>
#include <limits.h>

int main(){
	printf("ranges of signed char is from %d to %d \n", SCHAR_MIN, SCHAR_MAX);
	printf("ranges of unsigned char is from 0 to %d \n", UCHAR_MAX);
	printf("ranges of signed short is from %d to %d \n", SHRT_MIN, SHRT_MAX);
	printf("ranges of unsigned short is from 0 to %d \n", USHRT_MAX);
	printf("ranges of signed int is from %d to %d \n", INT_MIN, INT_MAX);
	printf("ranges of unsigned int is from 0 to %d \n",UINT_MAX);
	printf("ranges of signed long is from %ld to %ld \n", LONG_MIN, LONG_MAX);
	printf("ranges of unsigned long is from 0 to %ld \n", ULONG_MAX);

	int a = 2147483647;
	printf("%d\n", a+1);
	printf("%d\n", a+2);
	printf("%d\n", a*2);


	return 0;
}