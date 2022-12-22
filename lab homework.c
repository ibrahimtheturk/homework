#include <stdio.h>
#define MAX 100
int main()
{
	int a[MAX], reverse[MAX];
	int size, i, array, rev;
	printf("Please enter the size of the array. \n");
	scanf("%d", &size);
	
	printf("Please enter inputs of the array. \n");
	for (i=0;i<size;i++){
		printf("a[%d] = ", i);
		scanf("%d",&a[i]);}       
	rev=0;
	array=size-1;
	while (array>=0){
		reverse[rev]=a[array];
		rev++;
		array--;}
	printf("\n the reverse of the array is:");
	for (i=0;i<size;i++){
		printf("\n a[%d] = %d",i,
		 reverse[i]);}
	return 0;
}
