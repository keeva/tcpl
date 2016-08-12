//Write a program to print a histogram of the lengths of words in its input. 
//It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

/* assume word only contains letters. "I'm" is treated as two words "I" and "m" */


//horizontal histogram

/*
#include <stdio.h>

#define MAXLENGTH 10

int isletter(char c);
int intlong(int a);
int power(int x, int y);

int main() {
	int c;
	int wordlen;
	int inword = 0;
	int letter;
	int end = 0;
	int wordlenarr[MAXLENGTH +1];
	int maxq = 0;
	int index = 0;
	int i;

	for (; index <= MAXLENGTH ; index++) 
		wordlenarr[index] = 0;

	while (!end) {
		c = getchar();
		if (c != EOF) {
			letter = isletter(c);
			if (!inword) {
				if (letter) {
					wordlen = 1;
					inword = 1;
				}
			} else {
				if (letter) {
					wordlen++;
				} else {
					if(wordlen <= MAXLENGTH) {
						wordlen = wordlen - 1;
					} else {
						wordlen = MAXLENGTH;
					}
					wordlenarr[wordlen]++;
					if(maxq < wordlenarr[wordlen]) {
						maxq = wordlenarr[wordlen];
					}
					inword = 0;
				}	
			}
		} else {
			end = 1;
			if(inword && wordlen > 0) {
				if(wordlen <= MAXLENGTH) {
					wordlen = wordlen - 1;
				} else {
					wordlen = MAXLENGTH;
				}
				wordlenarr[wordlen]++;
				if(maxq < wordlenarr[wordlen]) {
					maxq = wordlenarr[wordlen];
				}
				inword = 0;
			}
		}
		
	}
	printf("\n\n");
	for (index = 0; index<= MAXLENGTH ; index++) {
		if (index == MAXLENGTH) {
			printf(">10 |");
		} else {
			printf("%3d |", index+1);
		}
		for (i =0; i< wordlenarr[index]; i++) {
			printf("█");
		}
		printf("   %d \n", wordlenarr[index]);
	}
	printf("    |");
	for (index = 0; index <= maxq; index++ ) {
		printf("_");
	}

	//  print horizontal ordinate dimension 
	printf("\n     ");
	int forprint[maxq];
	for (index = 0; index < maxq; ++index) {
		forprint[index] = index+1;
	}
	for (i= intlong(maxq); i > 0; i-- ) {
		int base = power(10, i-1);
		for (index = 0; index < maxq; ++index)
		{
			if(forprint[index]/base > 0) {
				printf("%d", forprint[index]/base);
				forprint[index] = forprint[index]%base ;
			} else {
				printf("0");
			}
		}
		printf("\n     ");
	}


	return 0;
}

int isletter(char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? c : 0 ;
}
int intlong(int a) {
	int i = 1;
	int p = a/10;
	if(p > 0) {
		i = i + intlong(p);
	}
	return i;
}

int power(int x, int y) {
	int r = 1;
	for (int i = 0; i < y; ++i)
	{
		r = r * x ;
	}
	return r;
}

*/



//vertical histogram

#include <stdio.h>

#define MAXLENGTH 10

int isletter(char c);

int main() {
	int c;
	int wordlen;
	int inword = 0;
	int letter;
	int end = 0;
	int wordlenarr[MAXLENGTH +1];
	int maxq = 0;
	int index = 0;
	int i;

	for (; index <= MAXLENGTH ; index++) 
		wordlenarr[index] = 0;

	while (!end) {
		c = getchar();
		if (c != EOF) {
			letter = isletter(c);
			if (!inword) {
				if (letter) {
					wordlen = 1;
					inword = 1;
				}
			} else {
				if (letter) {
					wordlen++;
				} else {
					if(wordlen <= MAXLENGTH) {
						wordlen = wordlen - 1;
					} else {
						wordlen = MAXLENGTH;
					}
					wordlenarr[wordlen]++;
					if(maxq < wordlenarr[wordlen]) {
						maxq = wordlenarr[wordlen];
					}
					inword = 0;
				}	
			}
		} else {
			end = 1;
			if(inword && wordlen > 0) {
				if(wordlen <= MAXLENGTH) {
					wordlen = wordlen - 1;
				} else {
					wordlen = MAXLENGTH;
				}
				wordlenarr[wordlen]++;
				if(maxq < wordlenarr[wordlen]) {
					maxq = wordlenarr[wordlen];
				}
				inword = 0;
			}
		}
	}
	printf("\n");
	for(index = 0; index < maxq; index++) {
		printf("\n%6d |", maxq - index);
		for(i = 0; i<= MAXLENGTH ; i++) {
			if(wordlenarr[i] >= maxq - index) {
				printf(" █ ");
			} else {
				printf("   ");
			}
		}
	}
	printf("\n        ");
	for(i = 0; i<= MAXLENGTH ; i++) {
		printf("---");
	}
	printf("\n       0");
	for(i = 0; i<= MAXLENGTH ; i++) {
		if(i == MAXLENGTH) {
			printf(">10");
		} else {
			printf("%2d ",i+1);
		}
	}
	printf("\n\n");
	return 0;
}

int isletter(char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? c : 0 ;
}





