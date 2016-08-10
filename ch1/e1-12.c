//Write a program that prints its input one word per line.

#include <stdio.h>

#define OUT 1
#define IN 0
int main() {
	int c;
	int state = OUT;
	double nw;
	while((c = getchar()) != EOF) {
		if(c == '\n' || c == ' ' || c == '\t') {
			putchar('\n');
			state = OUT;
		} else {
			putchar(c);
		}
		if(state) {
			++nw;
			state = IN;
		}
	}
	printf("%.0f \n", nw);
	return 0;
}