//Write a program to copy its input to its output, 
//replacing each string of one or more blanks by a single blank.

#include <stdio.h>
int main() {
	int c;
	int lb = 0;
	while((c = getchar()) != EOF) {
		if (lb == 1 ) {
			if(c != ' ') {
				putchar(c);
				lb = 0;
			}
		} else {
			putchar(c);
			if(c == ' ') {
				lb = 1;
			}
		}	
	}
	return 0;
}