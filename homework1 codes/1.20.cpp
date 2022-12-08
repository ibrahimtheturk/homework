#include <stdio.h>
int main()
{
	int n,dgt,cnt;
	printf("please enter the number \n");
	scanf("%d", &n);
	while (n!=0)
		{
		n=n/10;
		cnt++;
		}
		printf("your digit value is: %d", cnt);
		return 0;
}
