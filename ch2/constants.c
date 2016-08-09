#include <stdio.h>
int main() {
	char c = 127;
	char d = c;
	printf("c : %d\n", d);
	d = c+1;
	printf("c+1 : %d\n", d);
	d = c+2;
	printf("c+2 : %d\n", d);
	d = c+3;
	printf("c + 3 : %d\n", d);
	return 0;
}	
 