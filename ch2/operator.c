///   for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)

#include <stdio.h>
int main() {
	char c,line[100];
	int i;
	for (i=0;i<100;++i) {
		line[i] = 0;
	}
	for (i=0;i<99;++i) {
		if((c=getchar())=='\n') {
			break;
		} else if (c == EOF) {
			break;
		} else {
			line[i] = c;
		}
	}
	line[i] = '\0';
	printf("%s\n", line);
	return 0;
}	
