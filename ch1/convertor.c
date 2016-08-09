#include <stdio.h>

// Symbolic Constants
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
	/*  formula oC=(5/9)(oF-32) 
	float far, cels,test;
	printf("%s\t%s\n", "Fahrenheit" ,"Celsius");
	for (far=0; far<=300; far+=20) {
		// (5/9)*(far-32)
		cels = 5*(far-32)/9;
		test = (5.0/9.0)*(far-32);
		printf("%7.0f \t %6.2f \t %6.2f \n",far,cels,test);
	}*/
	/*float fahr,cels;
	printf("%s\t%s\n", "Celsius","Fahrenheit");
	for (cels=0; cels<=300; cels+=20) {
		fahr = (cels * 9 / 5) + 32;
		printf("%6.0f \t %6.2f \n", cels, fahr);
	}*/

	/*float far;
	printf("%s\t%s\n", "Fahrenheit" ,"Celsius");
	for (far=300; far>=0; far-=20) {
		printf("%7.0f \t %6.2f \n",far,5*(far-32)/9);
	}*/

	float fahr;
	printf("%s\t%s\n", "Fahrenheit" ,"Celsius");
	for (fahr=LOWER; fahr<=UPPER; fahr+=STEP) {
		printf("%7.0f \t %6.2f \n",fahr,5*(fahr-32)/9);
	}
	return 0;
}