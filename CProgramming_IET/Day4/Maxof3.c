//Accept 3 no and find max
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Write a number 1 ");
	scanf("%d",&num1);
	printf("Write a number 2 ");
	scanf("%d",&num2);
	printf("Write a number 3 ");
	scanf("%d",&num3);
	
	if(num1>num2)
	{
		if(num1>num3)
		printf("Number 1 is maximum");
	}
	else if(num2>num3)
	{
		printf("Number 2 is maximum");
	}
	else 
	printf("Number 3 is maximum");
	return 0;
}
