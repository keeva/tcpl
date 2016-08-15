//Write a function reverse(s) that reverses the character string s.
// Use it to write a program that reverses its input a line at a time.

#include <stdio.h>

#define MAXLINE 1000

int buffline(char buff[]);
void reverse(char origin[]);

int main() {
	char s[MAXLINE+1];
	while (buffline(s) != -1) {
		reverse(s);
		printf("%s\n", s);
	}
	reverse(s);
	printf("%s\n", s);
	return 0;
}

int buffline(char buff[]) {
	int i=0;
	int c;
	while(i<MAXLINE && (c = getchar()) != EOF && c != '\n') {
		buff[i++] = c;
	}
	buff[i] = '\0';
	if(c == EOF) {
		return -1;
	}
	return 0;
}

void reverse(char origin[]) {
	int i= 0,p;
	while(origin[i] != '\0')
		i++;
	for(p = i-1; p > (i-1)/2 ; p--) {
		char temp = origin[p];
		origin[p] = origin[i-p-1];
		origin[i-p-1] = temp;

	}
	return;
}
