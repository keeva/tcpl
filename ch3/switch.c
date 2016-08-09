
/*
#include <stdio.h>
int main(){
	
	int i = 2;
	switch(i) {
		case 0:
			printf("0\n");
			break;
		case 3:
			printf("3\n");
			break;
		default:
			printf("default\n");
		case 1:
			printf("1\n");
			break;
	}

	return 0;
}
*/

// E 3-2  Write a function escape(s,t) that converts characters like newline and tab into visible escape 
		//sequences like \n and \t as it copies the string t to s. Use a switch. Write a function for 
		//the other direction as well, converting escape sequences into the real characters.

#include <stdio.h>

void escape(char s[], char t[]);
void reverse(char t[], char s[]);

int main() {
	int i = 0;
	char c;
	char s[100];
	char t[200];
	while (i < 99 &&(c = getchar()) != EOF) {
		t[i++] = c;
	}
	t[i] = '\0';
	escape(s,t);
	printf("\nEscaped string: \n%s\n", s);
	reverse(t,s);
	printf("Reversed string: \n%s\n", t);
	return 0;
}

void escape(char s[], char t[]) {
	int i = 0;
	int p = 0;
	char c;
	while(i<100) {
		c = t[i++];
		switch (c) {
			case '\n':
				s[p++] = '\\';
				s[p++] = 'n';
				break;
			case '\t':
				s[p++] = '\\';
				s[p++] = 't';
				break;
			default:
				s[p++] = c;
				break;
		}
	}
}

void reverse(char t[], char s[]) {
	int i = 0;
	int p = 0;
	char c;
	while ((c = s[i++]) != '\0') {
		switch(c) {
			case '\\':
				switch(s[i++]) {
					case 't':
					t[p++] = '\t';
					break;
					case 'n':
					t[p++] = '\n';
					break;
				}
				break;
			default:
				t[p++] = c;
				break;
		}
	}
}




