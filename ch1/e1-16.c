//Revise the main routine of the longest-line program so it will correctly print 
//the length of arbitrary long input lines, and as much as possible of the text.

// I don't know what does this mean...

#include <stdio.h>
#define MAXLINE 1000

int getcline(char line[],int lim);
void copy(char to[],char from[]);
int main() {
	int len,max;
	char line[MAXLINE],longest[MAXLINE];
	max = 0;
	while ((len = getcline(line,MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest,line);
		}
	}
	if(max > 0) {
		printf("\nLongest is %d characters: \n%s\n", max,longest);
	}
	return 0;
}

int getcline(char line[],int lim) {
	int c,i;
	i = 0;
	while (i< lim && (c= getchar()) != EOF && c != '\n') {
		line[i] = c;
		++i;
	}
	if ( c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}
void copy(char to[],char from[]) {
	int i;
	i=0;
	while((to[i] = from[i])!= '\0') {
		++i;
	}
}