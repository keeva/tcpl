#include <stdio.h>
#include <ctype.h>

int atoi(char s[]);

int main(int argc, char const *argv[])
{
	char s[] = "  -1343sdfsadfd";
	printf("%d\n", atoi(s));
	return 0;
}

int atoi(char s[]) {
	int i,n,sign;
	n = 0;
	for(i=0; isspace(s[i]) ; i++)
		;
	sign = s[i] == '-' ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9') {
		n = 10*n + (s[i] - '0');
		i++;
	}
	return sign * n;
}