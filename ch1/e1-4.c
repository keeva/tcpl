//Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>

// Symbolic Constants
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
	float fahr,cels;
	printf("%s\t%s\n", "Celsius","Fahrenheit");
	for (cels=0; cels<=300; cels+=20) {
		fahr = (cels * 9 / 5) + 32;
		printf("%6.0f \t %6.2f \n", cels, fahr);
	}
	return 0;
}