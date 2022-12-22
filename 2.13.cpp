#include <stdio.h>
int main()
{
	int n, sum, temp,r,i,a;
	printf("please enter the number. \n");
	scanf("%d",&n);
	temp=n;
	while (n!=0){
		r=n%10;
		for(i=1;i<=r;i++){
			a=a*i;}
			sum=sum+a;
		n=n/10;}
	if(n==sum){
		printf("number is strong.");}
	else 
	printf("no strong number.");
	return 0;
	}
