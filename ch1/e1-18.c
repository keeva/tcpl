//Write a program to remove trailing blanks and tabs from each line of input,
//and to delete entirely blank lines.

#include <stdio.h>

#define MAXLINE 10

int buffline(char buff[]);
void copyline(char buff[],int max);

int main() {
	char buff[MAXLINE+1];
	int status;
	for (int i = 0; i < MAXLINE; ++i)
	{
		buff[i] = 0;
	}
	while (status != -1) {
		status = buffline(buff);
		if(status > 0) {
			copyline(buff, status);
		}
	}
	return 0;
}

int buffline(char buff[]) {
	int i = 0;
	int c;
	int max = 0;
	while (i< MAXLINE && (c= getchar()) != EOF && c != '\n') {
		if(c != ' ' && c != '\t' && c!= '\n') {
			max = i + 1;
		}
		buff[i++] = c;
	}
	if(c == '\n' || c == EOF) {
		buff[max] = '\0';
	}
	return max;
}

/*
int buffchar(char buff[]) {
	int i = 0;
	int c;
	int max = 0;
	while (i< MAXLINE) {
		c = getchar();
		if(c == EOF) return -1;
		if(c != ' ' && c != '\t' && c!= '\n') {
			max = i + 1;
			//printf("%d\n", max);
		}
		if (c != '\n'){
			buff[i++] = c;
		} else {
			i = MAXLINE;
			buff[max] = '\0';
		}
	}
	return max;
}*/


void copyline(char buff[]) {
	int i;
	i=0;
	while(buff[i] != '\0') {
		putchar(buff[i]);
		++i;
	}
	putchar('\n');
}

