/* 4.	Write C program to find cube of an integer number using two different methods.
	1. Without using Built-in Function pow().
 */

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number= ");
	scanf("%d",&a);
	b=a*a*a;
	printf("Cube = %d",b);
	return 0;
}