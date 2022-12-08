#include <stdio.h>
int main()
{
	int t;
	printf("Welcome to celcius to fahrenheit converter program. please enter the celcius value");
	printf("\n");
	scanf("%d", &t);
	t= t*1.8 +32;
	printf("your temperature is:");
	printf("fahrenheit %d", t);
	return 0;
}
