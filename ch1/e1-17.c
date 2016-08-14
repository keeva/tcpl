//Write a program to print all input lines that are longer than 80 characters.

#include <stdio.h>
#define MINSIZE 81

int buffchar(char buff[]);
int copyline(char buff[]);
int main() {
	char buff[MINSIZE];
	int status = 0;
	while(status != 1) {
		status = buffchar(buff);
		if(status == 1) {
			status = copyline(buff);
		}
	}
	
}

int buffchar(char buff[]) {
	int c;
	int i = 0;
	while (i < MINSIZE) {
		c = getchar();
		if(c == EOF) return -1;
		if(c == '\n') return 0;
		buff[i++] = c;
	}
	return 1;
	
}
int copyline(char buff[]) {
	int c, i;
	int status = 1;
	for (i = 0; i < MINSIZE; ++i){
		putchar(buff[i]);
	}
	while (status == 1) {
		c = getchar();
		if (c == EOF) status = -1;
		else if(c == '\n') status = 0;
		else putchar(c);
	}
	putchar('\n');
	return status;
}