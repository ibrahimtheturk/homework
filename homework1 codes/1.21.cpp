#include <stdio.h>
int main()
{
	int n,cnt,fd,ld,temp;
	printf("please enter the number \n");
	scanf("%d",&n);
	ld=n%10;
	printf("\n your last digit is: %d", ld);
	temp=n;
	while(temp >= 10)
    {
        temp = temp / 10;
    }

	printf("\n your first digit is: %d",temp);
		return 0;
}
