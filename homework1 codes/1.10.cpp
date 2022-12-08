#include <stdio.h>
int main()
{
	int a, b, n;
	printf("please enter the low value \n");
	scanf("%d", &a);
	printf("please enter the high value \n");
	scanf("%d", &b);
	printf("please enter the dividing number \n");
	scanf("%d", &n);
	while (a<=b)
	{{if (a%b==0)
	printf("%d",a);
	a++;}}

	
	return 0;
}
