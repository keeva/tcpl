//Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

double convertor(double temperature, int tocels);

int main() {
	double i;
	printf("Celsius Fahrenheit \n");
	for (i = LOWER; i <= UPPER; i+= STEP)
	{
		printf("%4.0f \t %6.2f\n",i,convertor(i,0));
	}
	printf("\nFahrenheit  Celsius \n");
	for (i = LOWER; i <= UPPER; i+= STEP)
	{
		printf("%4.0f \t %6.2f\n",i,convertor(i,1));
	}
	return 0;
}

double convertor(double temperature, int tocels) {
	// (5.0/9.0)*(far-32)
	double c;
	if(tocels) {
		c = (temperature - 32) * (5.0 / 9.0) ;
	} else {
		c = temperature * 9 / 5 + 32;
	}
	return c;
}