//4.	Write C program to find cube of an integer number using two different methods: 
// 4A. Without using Built-in Function pow()

#include<stdio.h>
int main()
{
	int i;
	printf("Enter a interger number");
	scanf("%d",&i);
	i=i*i*i;
	printf("Cube Of an Integer Is %d",i);
	return 0;
}
