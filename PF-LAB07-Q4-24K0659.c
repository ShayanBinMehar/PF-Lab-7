#include <stdio.h>
int main()
{
	int a, b, i;
	printf("Enter the value of a:\n");
	scanf("%d", &a);
	printf("Enter the value of b:\n");
	scanf("%d", &b);
	i<=b;
	for(i=a; i<=b; i++){
	if (i>=1 && i<=9){
		switch(i){
			case 1:
				{
					printf("One\n");
				}
				break;
			case 2:
				{
					printf("Two\n");
				}	
				break;
			case 3:
				{
					printf("Three\n");
				}	
				break;
			case 4:
				{
					printf("Four\n");
				}	
				break;
			case 5:
				{
					printf("Five\n");
				}	
				break;
			case 6:
				{
					printf("Six\n");
				}	
				break;
			case 7:
				{
					printf("Seven\n");
				}	
				break;
			case 8:
				{
					printf("Eight\n");
				}	
				break;
			case 9:
				{
					printf("Nine\n");
				}	
				break;
		
	}

	
}
else if( i % 2 == 0 ){
	printf("Even\n");
}
else{
	printf("Odd\n");
}
}
return 0;
}