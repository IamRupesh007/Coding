//2.	Write a C program to find subtraction of two integer number
#include<stdio.h>
int main()
{
	int num1,num2,sub;
	printf("Enter 2 number\n");
	scanf("%d%d",&num1,&num2);
	
	sub=num1-num2; //sum=num1+num2
	printf("Subtraction of numbers is %d",sub);
	 
	return 0;
}
