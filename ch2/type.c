/*#include <stdio.h>
int atoi(char s[]);
int lower(int i);

int main() {
	char c[4];
	c[0] = '1';
	c[1] = '5';
	c[2] = 'a';
	c[3] = '1';
	printf("%s\n", c);
	printf("%d\n", atoi(c));
	printf("%c\n",lower('D'));
}	

int atoi(char s[]) {
	int i , n;
	n = 0;
	for (i = 0; s[i]  <='9' && s[i] >= '0'; ++i)
	{
		n = 10 * n + (s[i] - '0');
	}
	return n;
}

int lower(int i) {
	if(i >= 'A' && i <= 'Z') 
		i = i + 'a' - 'A';
	return i;
}
*/

#include <stdio.h>
int htoi(char s[]);
int lower(int i);
int main(){
	char c[] = "0x23d";
	printf("%s\n", c);
	printf("%d\n", htoi(c));
	return 0;
}

int htoi(char s[]) {
	int i = 0,n=0;
	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
		i = 2;
	for (;(s[i]  <='9' && s[i] >= '0') || (s[i]  >='a' && s[i] <= 'f') || (s[i]  >='A' && s[i] <= 'F');++i) {
		int c = lower(s[i]);
		if ( c >='a' && c <= 'f') {
			c = '9' + (c - 'a' + 1);
		}
		n = 16 * n + (c - '0');
	}
	return n;
}

int lower(int i) {
	if(i >= 'A' && i <= 'Z') 
		i = i + 'a' - 'A';
	return i;
}

