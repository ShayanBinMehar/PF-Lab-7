#include <stdio.h>
int main()
{
	int arr1[] = {0,0,0,0};
	int arr2[] = {1,1};
	int arr3[] = {2,2,2,2};
	int arr4[] = {3,3};
	int arr5[] = {4,4,4,4};
	int arr6[] = {5,5};
	int arr7[] = {6,6,6,6};
	
	int len1 = sizeof(arr1)/sizeof(arr1[0]);
	int len2 = sizeof(arr2)/sizeof(arr2[0]);
	int len3 = sizeof(arr3)/sizeof(arr3[0]);
	int len4 = sizeof(arr4)/sizeof(arr4[0]);
	int len5 = sizeof(arr5)/sizeof(arr5[0]);
	int len6 = sizeof(arr6)/sizeof(arr6[0]);
	int len7 = sizeof(arr7)/sizeof(arr7[0]);
	
	int i;
	
	for (i=0; i<len1; i++){
		printf("%d\t", arr1[i]);
	}
	printf("\n");
	printf("\t");
	for(i=0; i<len2; i++){
		printf("%d\t", arr2[0]);
	}
	printf("\n");
	for(i=0; i<len3; i++){
		printf("%d\t", arr3[0]);
	}
	printf("\n");
	printf("\t");
	for(i=0; i<len4; i++){
		printf("%d\t", arr4[0]);
	}
	printf("\n");
	for(i=0; i<len5; i++){
		printf("%d\t", arr5[0]);
	}
	printf("\n");
	printf("\t");
	for(i=0; i<len6; i++){
		printf("%d\t", arr6[0]);
	}
	printf("\n");
	for(i=0; i<len7; i++){
		printf("%d\t", arr7[0]);
	}	
}