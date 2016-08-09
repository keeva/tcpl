// E 3-1
#include <stdio.h>
#include <time.h>
#define MAX_ELEMENT 20000
int binsearch(int x,int v[],int n);
int binsearch2(int x,int v[],int n);

int main() {
	int testdata[MAX_ELEMENT];
	int index;
	int n = -1;
	int i;
	clock_t time_taken;
	for (i = 0; i < MAX_ELEMENT; ++i)
	{
		testdata[i] = i;
	}

	for ( i = 0, time_taken = clock(); i < 100000; ++i)
	{
		index = binsearch(n,testdata,MAX_ELEMENT);
	}
	time_taken = clock() - time_taken;
	printf("It takes %lu clocks (%lu seconds) using binsearch function.\n", time_taken, time_taken );
	for ( i = 0, time_taken = clock(); i < 100000; ++i)
	{
		index = binsearch2(n,testdata,MAX_ELEMENT);
	}
	time_taken = clock() - time_taken;
	printf("It takes %lu clocks (%lu seconds) using binsearch2 function.\n", time_taken, time_taken );
	
	return 0;
}


/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */ 
int binsearch(int x, int v[], int n)
{
    int low, high, mid;
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low+high)/2; 
		if (x < v[mid])
			high = mid - 1; 
		else if (x > v[mid])
		    low = mid + 1;
		else    /* found match */
			return mid;
	}
	return -1; /* no match */ 
}

int binsearch2(int x, int v[],int n) {
	int low, high, mid;
	low = 0;
	high = n-1;
	mid = (low + high) / 2;
	while (low <= high && x != v[mid]) {
		if (x < v[mid]) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
		mid = (low + high) / 2;
	}
	if(x == v[mid]) {
		return mid;
	}
	return -1;

}