#include <stdio.h>
int main()
{
	int number;
	printf("please enter number.");
	scanf("%d", &number);
	if (number%2==0)
	printf("your number is even.");
	else 
	printf("your number is odd.");
	return 0;
}
