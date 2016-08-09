/*
#include <stdio.h>
unsigned getbits(unsigned x, int p, int n);

int main(){
	unsigned int i = 02665;
	printf("%d\n", getbits(i,8,3));
	return 0;
}

unsigned getbits(unsigned x, int p, int n) {
	return x >> ( p+1-n )  &  ~(~0 << n);
}
*/

// E 2-6  Write a function setbits(x,p,n,y) that returns x with the n bits 
//		  that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.

#include <stdio.h>
#define BITS 16
unsigned getbits(unsigned x, int p, int n, unsigned y);
void itob(int i, char c[]);
void printb(char c[]);

int main(){
	unsigned int x = 02665;
	unsigned int y = 012;
	char c[BITS+1];
	c[BITS] = '\0';
	itob(x,c);
	printf("x:");
	printb(c);
	itob(y,c);
	printf("y:");
	printb(c);
	itob(getbits(x,6,4,y),c);
	printf("R:");
	printb(c);
	//printf("%d\n", getbits(x,8,3,y));
	return 0;
}

unsigned getbits(unsigned x, int p, int n, unsigned y) {
	return (x & ( ~0 << p | ~(~0 << ( p-n )))) | ( (y & ~(~0<<n)) << (p-n) );
}
void printb(char c[]) {
	for (int i = 0; i < BITS; ++i)
	{
		if ( i % 4 == 0) {
			printf(" ");
		}
		printf("%c", c[i]);
	}
	printf("\n");
}

void itob(int i,char c[]) {
	int p=BITS-1;
	char t;
	while(i!=0) {
		t = (i%2 == 0 ? '0' : '1');
		c[p--] =  t;
		i /= 2;
	}
	while (p>=0) { 
		c[p--] = '0';
	}
	return;
}
