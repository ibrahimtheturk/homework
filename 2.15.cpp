#include <stdio.h>
int main()
{
	int n,r,temp,sum=0;
	printf("please enter a number. \n");
	scanf("%d",&n);
	temp=n;
	while (n>0)
		{
			r=n%10;
			sum=(sum*10)+r;
			n=n/10;
		}
	if(temp==sum)
	printf("this is a palindrome number.");
	else 
	printf("no palindrome number.");
	return 0;
}
