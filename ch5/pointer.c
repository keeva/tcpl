#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x , y , z[10];
	int* ip;
	x = 1;
	ip = &x;
	printf("ip : %p\n", ip);
	y = *ip + 1;
	x++;
	printf("ip : %p\n", ip);
	printf("*ip : %d\n", *ip);
	printf("x : %d\n", x);
	printf("y : %d\n", y);
	return 0;
}