#include <stdio.h>

int main() {
   float n,i,j,k,cnt,sum=0,final=0;
	printf("please enter the n value. \n");
	scanf("%f", &n);
for(j=1;j<=n;j++){
   for(i = 1; i <= j; i++) {
   	sum=(float)sum*10+1;
   	final=final+sum;
	}}
	   printf("%f",final);
	return 0;}
