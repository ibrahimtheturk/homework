#include <stdio.h>
int main(
)
{
	int i,n,multi;
	printf("please enter a number \n");
	scanf("%d", &n);
	for(i=1;i<=10;i++)
		{
		multi=(i*n);
		printf("\n %d", multi);	
		}
	return 0;
}
