#include <stdio.h>
int main()
{
	int r;
	printf("please enter radius value of your circle.");
	printf("\n");
	scanf("%d", &r);
	r=r*r*3;
	printf("\n");
	printf("your circle's area is: %d", r);
	return 0;
}
