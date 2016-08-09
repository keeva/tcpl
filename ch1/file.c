/*
#include <stdio.h>
int main() {
	double nc;
	for( nc = 0; getchar() != EOF; ++nc) ;
	printf("\n %.0f \n", nc);
	return 0;
}
*/

/*
#include <stdio.h>
int main() {
	int c, nl;
	nl = 0;
	while((c = getchar()) !=EOF) {
		if (c == '\n') 
			++nl;
	}
	printf("%d\n", nl);
}
*/

//E1-8
/*
#include <stdio.h>
int main() {
	int c;
	double n = 0;
	while ((c = getchar()) != EOF) {
		switch (c) {
			case ' ':
			case '\n':
			case '\t':
				++n;
				break;
			default:
				break;
		}
	}
	printf("%.0f \n", n);
	return 0;
}
*/


//E1-9
/*
#include <stdio.h>
int main() {
	int c;
	int lb = 0;
	while((c = getchar()) != EOF) {
		if (lb == 1 ) {
			if(c != ' ') {
				putchar(c);
				lb = 0;
			}
		} else {
			putchar(c);
			if(c == ' ') {
				lb = 1;
			}
		}	
	}
	return 0;
}
*/

//E1-10
/*
#include <stdio.h>
int main() {
	int c;
	while((c = getchar()) != EOF) {
		switch (c) {
			case '\t':
			putchar('\\');
			putchar('t');
			break;
			case '\b':
			putchar('\\');
			putchar('b');
			break;
			case '\\':
			putchar('\\');
			putchar('\\');
			break;
			default:
			putchar(c);
			break;

		}
	}
	return 0;
}
*/

//E1-12
#include <stdio.h>

#define OUT 1
#define IN 0
int main() {
	int c;
	int state = OUT;
	double nw;
	while((c = getchar()) != EOF) {
		if(c == '\n' || c == ' ' || c == '\t') {
			putchar('\n');
			state = OUT;
		} else {
			putchar(c);
		}
		if(state) {
			++nw;
			state = IN;
		}
	}
	printf("%.0f \n", nw);
	return 0;
}


