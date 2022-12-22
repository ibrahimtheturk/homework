#include <stdio.h>
int main()
{
	int	n=100,sum=0;
	while (n<200){
		if(n%9==0){
			printf("%d \n",n);
			sum=sum+n;}
		n++;}
	printf("\n sum of the numbers is: %d",sum);
	return 0;
}
