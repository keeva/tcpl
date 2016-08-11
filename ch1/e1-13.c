//Write a program to print a histogram of the lengths of words in its input. 
//It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

//horizontal histogram

/* assume there is no ' like in " I'm "  in the text */
#include <stdio.h>

#define MAXLENGTH 10

int isletter(char c);
int main() {
	int c;
	int wordlen;
	int inword = 0;
	int letter;
	long wordlenarr[MAXLENGTH +1];
	long maxq = 0;
	int index = 0;
	int i;

	for (; index <= MAXLENGTH ; index++) 
		wordlenarr[index] = 0;

	while ((c = getchar()) != EOF) {
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
				wordlen <= MAXLENGTH ? wordlenarr[wordlen-1]++ : wordlenarr[MAXLENGTH]++ ;
				if(maxq < wordlenarr[wordlen-1]) {
					maxq = wordlenarr[wordlen-1];
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
		printf("\t %ld \n", wordlenarr[index]);
	}
	printf("    |");
	//printf("%ld\n", maxq);
	for (index = 0; index <= maxq; index++ ) {
		printf("_");
	}
	printf("\n    0");
	for (index=0; index < maxq; index++ ) {
		printf(" ");
	}
	printf("%ld\n\n",maxq);
	return 0;
}

int isletter(char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? c : 0 ;
}