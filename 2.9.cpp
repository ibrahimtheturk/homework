#include <stdio.h>
int main()
{
	int n, temp, a, sum=0;
	printf("please enter a number \n");
	scanf("%d", &n);
	temp=n;
	while (n>0)
		{
		a=n%10;
		sum=sum+a*a*a;
		n/10;
		}
	if (sum==temp)
		{
			printf("number is armstrong.");
		}
	else 
		printf("number is not armstrong");
	return 0;
}		
