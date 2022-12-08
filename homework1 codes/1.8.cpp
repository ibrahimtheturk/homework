#include <stdio.h>
int main()
{
	int sum, a, b;
	printf("please enter the low value \n");
	scanf("%d", &a);
	printf("please enter the high value \n");
	scanf("%d", &b);
	while (a<=b)
	{
		sum+=a;
		a++;
	}
	printf("sum of the numbers: %d", sum);
	return 0;
}

