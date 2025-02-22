#include <stdio.h>
int main()
{
	int n;
	int sum=0;
	
	printf("Enter number of elements whose sum is required:\n");
	scanf("%d", &n);
	
	int array[n];
	//taking array input
	for (int i=0; i<n; i++){
		printf("Enter element %d:\t", i+1);
		scanf("%d", &array[i]);
		printf("\n");
	}
	//calculating and printing sum
	for (int i=0; i<n; i++){
		sum = sum + array[i];
	}
	printf("Sum = %d", sum);

	
	
}