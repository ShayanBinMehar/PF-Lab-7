#include <stdio.h>
int main()
{
	int i,num;
	
	printf("Enter number of elements you want to enter:\n");
	scanf("%d", &num);
	
	int arr[num];
	// array input
	for (i=0; i<num; i++){
		printf("Enter element %d:\t", i+1);
		scanf("%d", &arr[i]);
		printf("\n");
	}
	//printing array as it is
	printf("Array in correct order:\n");
	for (i=0; i<num; i++){
		printf("%d\t", arr[i]);
	}
	//printing array in reverse order
	printf("\n");
	printf("Array in reverse order:\n");
	for (i=num-1; i>=0; i--){
		printf("%d\t", arr[i]);
	}
	
}