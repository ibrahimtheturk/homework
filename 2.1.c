#include <stdio.h>
int main()
{
	int a,b,area,per;
	printf("please enter the rectangle's two side. \n");
	scanf("%d", &a);
	printf("\n");
	scanf("%d", &b);
	printf("\n");
	per=(2*a)+(2*b);
	area=(a*b);
	printf("your rectangle's area is: %d \n", area);
	printf("your rectangle's perimeter is: %d \n", per);
	return 0;
	
}
