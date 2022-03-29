/* 4.	Write C program to find cube of an integer number using two different methods.
	2. using Built-in Function pow((Make use of Math.h )
 */

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("enter a number= ");
	scanf("%d",&a);
	b=pow(a,3);
	printf("Cube = %d",b);
	return 0;
}