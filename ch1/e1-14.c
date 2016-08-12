//Write a program to print a histogram of the frequencies of different characters in its input.

/* assume the length and width is big enough. */

//horizontal histogram

/*
#include <stdio.h>

#define NUM_CHARS 256
int main() {
	char c;
	int i,n;
	int freqchar[NUM_CHARS + 1];
	int max = 0;

	for (i = 0; i < NUM_CHARS; ++i)
	{
		freqchar[i] = 0;
	}

	while((c = getchar()) != EOF) {
		freqchar[c]++;
		if (max < freqchar[c]) {
			max = freqchar[c];
		}
	}

	for (i=0 ; i < NUM_CHARS; ++i) {
		if (freqchar[i] > 0) {
			printf("\n%5d|", i);
			for (n = 0; n < freqchar[i]; ++n)
			{
				printf("█");
			}
			printf("  %d", freqchar[i]);
		}
	}

	printf("\n      -");
	for (i = 0; i < max; ++i)
	{
		printf("-");
	}
	printf("\n     0");
	for (i = 0; i < max - 1; ++i)
	{
		printf(" ");
	}
	printf("%d\n", max);



	return 0;
}
*/

//vertical histogram

#include <stdio.h>
#define NUM_CHARS 256

int intlong(int a);
int power(int x, int y);

int main() {
	char c;
	int freqchar[NUM_CHARS + 1];
	int charint[NUM_CHARS + 1];
	int i,n;
	int max = 0;
	int base;

	for (i = 0; i < NUM_CHARS; ++i)
	{
		freqchar[i] = 0;
		charint[i] = i;
	}

	while((c = getchar()) != EOF) {
		freqchar[c]++;
		if (max < freqchar[c]) {
			max = freqchar[c];
		}
	}

	printf("\n\n");
	for(i = max; i >0 ; i--) {
		printf("\n%5d |", i);
		for(n = 0; n < NUM_CHARS; n++) {
			if(freqchar[n] > 0) {
				if(freqchar[n] >= i) {
					printf(" █ ");
				} else {
					printf("   ");
				}
			}
		}
	}
	printf("\n      -");
	for(n = 0; n < NUM_CHARS; n++) {
		if(freqchar[n] > 0) {
			printf("---");
		}
	}
	for(i=1; i<= 3; i++) {
		printf("\n      ");
		base = power(10,3-i);
		for(n = 0; n < NUM_CHARS; n++) {
			if(freqchar[n] > 0) {
				printf("%3d", charint[n]/base);
				charint[n] = charint[n]%base;
			}
		}
	}
	printf("\n");

	return 0;
}

int intlong(int a) {
	int i = 1;
	int p = a/10;
	if(p > 0) {
		i = i + intlong(p);
	}
	return i;
}

int power(int x, int y) {
	int r = 1;
	for (int i = 0; i < y; ++i)
	{
		r = r * x ;
	}
	return r;
}






