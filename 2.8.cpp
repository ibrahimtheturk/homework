#include<stdio.h>
int main(){
   int i, num, n, count,sum=0;
   printf("enter the n value:");
   scanf("%d", &n);
   for(num = 1;num<=n;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
            sum+=num;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d ",sum);
   }
}
