//Modify the temperature conversion program to print the table in reverse order, 
//that is, from 300 degrees to 0.

#include <stdio.h>

// Symbolic Constants
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
	float far;
	printf("%s\t%s\n", "Fahrenheit" ,"Celsius");
	for (far=300; far>=0; far-=20) {
		printf("%7.0f \t %6.2f \n",far,5*(far-32)/9);
	}
	return 0;
}