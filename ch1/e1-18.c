//Write a program to remove trailing blanks and tabs from each line of input,
//and to delete entirely blank lines.

#include <stdio.h>

#define MAXLINE 1000

int buffline(char buff[]);

int main() {
	char buff[MAXLINE+1];
	int status;
	for (int i = 0; i < MAXLINE; ++i)
	{
		buff[i] = 0;
	}
	while ((status = buffline(buff)) != -1) {
		printf("%s\n", buff);
	}
	printf("\n%s\n", buff);
	return 0;
}

int buffline(char buff[]) {
	int i = 0;
	int c;
	int max = 0;
	while ((c= getchar()) != EOF && c != '\n') {
		if(c != ' ' && c != '\t' && c!= '\n' && i< MAXLINE) {
			max = i + 1;
		}
		buff[i++] = c;
	}
	buff[max] = '\0';
	if(c == EOF) {
		return -1;
	}
	return max;
}


