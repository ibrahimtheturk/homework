#include <stdio.h>
int main()
{
	int n,num,i,r,sum;
	printf("please enter the n value");
	scanf("%d", &n);
	for(num=1;num<n;num++){
		sum=0;
		for(i=1;i<num;i++){
			r = num % i;
			if (r==0){
				sum = sum + i;
			}
			if(sum==num)
			{
			   printf("%d, ", num);
			}	
		}
	}
	return 0;
}
