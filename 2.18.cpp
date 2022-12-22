#include <stdio.h>

int main() {
   int n,i,j,k;
	printf("please enter the n value. \n");
	scanf("%d", &n);
   for(i = 1; i <= n; i++) {
   	if (i%2==1)
   	k=1;
   	if(i%2==0)
   	k=0;
      for(j = 1;j <= i; j++)
         if (k==0){
         	printf("1");
         	k=1;
	  }
         else{
         	printf("0");
         	k=0;
	  }

      printf("\n");
   }

   return 0;
}
