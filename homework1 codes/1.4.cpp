#include <stdio.h>
int main()
{
	int t;
	printf("please enter the temperature.");
	printf("\n");
	scanf("%d", &t);
	if (t==0)
	printf("temperature is at the freezing point.");
	if (t>0)
	printf("temperature is above the freezing point.");
	if (t<0)
	printf("temperature is below the freezing point.");
	return 0;
}
