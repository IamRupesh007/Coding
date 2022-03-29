//Swap 2 nummbers with basic logic
#include<stdio.h>
int main()
{
	int num1,num2,temp;
	
	printf("Enter Number 1 "); //10
	scanf("%d",&num1);
	
	printf("Enter Number 2 "); //20
	scanf("%d",&num2);
	
	temp=num1; //temp=10, num1=10
	num1=num2; //num1=20 num2=20
	num2=temp; //num2=10 temp=10
	
	printf("After Swaping num1 is %d\n",num1);
	printf("After Swaping num2 is %d",num2);
	
	return 0;
}
