#include <stdio.h>
int main()
{
	int a,b,lcm;
	lcm= (a>b)?a:b;
	printf("please enter two numbers. \n");
	scanf("%d \n", &a);
	scanf("%d", &b);
	while (1)
		{
			if (lcm%a==0 && lcm%b==0){
				printf("lcm is %d", lcm);
				break;
			}
			++lcm;
		}
		return 0;
}
