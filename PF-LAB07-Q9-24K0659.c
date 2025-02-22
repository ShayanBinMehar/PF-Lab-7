#include <stdio.h>
int main()
{
	int num,i;
	
	printf("Enter number of elements:\n");
	scanf("%d", &num);
	
	int arr[num];
	//taking input for array
	for (i=0; i<num; i++){
		printf("Enter element %d:\n", i+1);
		scanf("%d", &arr[i]);
	}
	//printing array
	for (i=0; i<num; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	//finding minimum number
	int min;
	min = arr[0];
	for (i=0; i<num; i++){
		if (arr[i] < min){
			min = arr[i];
		}
	}
	printf("Minimum Number = %d", min);
	printf("\n");
	//finding maximum number
	int max;
	max = arr[0];
	for (i=0; i<num; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	printf("Maximum Number = %d", max);
}