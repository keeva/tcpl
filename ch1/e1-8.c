//Write a program to count blanks, tabs, and newlines.

#include <stdio.h>
int main() {
	int c;
	double n = 0;
	while ((c = getchar()) != EOF) {
		switch (c) {
			case ' ':
			case '\n':
			case '\t':
				++n;
				break;
			default:
				break;
		}
	}
	printf("%.0f \n", n);
	return 0;
}