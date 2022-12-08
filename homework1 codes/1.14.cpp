#include <stdio.h>
int main()
{
	int n, i,sum=1;
	printf("please enter the value \n");
	scanf("%d",&n);
	for(i=1 ; i<=n ; i++)
		{
			sum *= i;
		}
	printf("your result is %d", sum);
	return 0;
}
