#include <stdio.h>
int main()
{
float x,i,j,k,a,final=0,sum=1,z=1;
	printf("please enter the x value. \n");
	scanf("%f", &x);
	for(i=0;i<=x;i++){
	//factorial
		for(j=1;j<=i;j++){
		sum=sum*j;}
	//power
		for(k=1;k<=i;k++){
			z=z*i;
		}
		final=(float)final+z/sum;
	}
	printf("answer is: %f",final);
	return 0;
}
