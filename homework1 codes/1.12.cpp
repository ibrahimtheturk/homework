#include <stdio.h>
int main()
{
	int low,high,a;
	printf("please enter the low value \n");
	scanf("%d", &low);
	printf("please enter the high value \n");
	scanf("%d", &high);
	printf("\n");
	a=low;
	for(a;a<=high;a++)
		{printf("%d \n", a);
					}
	return 0;
}
