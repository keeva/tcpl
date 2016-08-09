#include <stdio.h>
int main() {
	int c,i,n,wn = 0,othern = 0;
	int digits[10];
	for(i = 0; i< 10; ++i) {
		digits[i] = 0;
	}
	while((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			digits[c-'0']++;
		} else if (c == '\n' || c == '\t' || c == ' ') {
			wn++;
		} else {
			othern++;
		}
	}
	//printf("\nThe number of digits are: ");
	printf("\n\n");
	for (i = 0; i < 10; ++i)
	{
		for(n=0; n<digits[i]; ++n) {
			printf("█");
		}
		printf("  %d (%d)\n", i,digits[i]);
	}
	for(n=0; n<wn; ++n) {
			printf("█");
	}
	printf("  white space (%d)\n",wn);
	for(n=0; n<othern; ++n) {
			printf("█");
	}
	printf("  other characters (%d)\n\n",othern);
}

