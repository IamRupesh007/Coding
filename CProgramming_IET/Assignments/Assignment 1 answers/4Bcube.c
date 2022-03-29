//4.	Write C program to find cube of an integer number using two different methods.
//	4B. Using Built-in Function pow()- (Make use of Math.h )

#include<stdio.h>
#include<math.h>
int main()
{
	int i,cube;
	printf("Enter integer number ");
	scanf("%d",&i);
	cube = pow(i,3);
	printf("Cube of number is %d",cube);
	
	
	return 0;
}
