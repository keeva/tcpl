//Modify the temperature conversion program to print a heading above the table.

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
	
	float far, cels;
	printf("%s\t%s\n", "Fahrenheit" ,"Celsius");
	for (far=0; far<=300; far+=20) {
		// (5/9)*(far-32)
		cels = 5*(far-32)/9;
		printf("%7.0f \t %6.2f\n",far,cels);
	}
	return 0;
}