//6.	Write a Program to calculate simple interest.
#include<stdio.h>
int main()
{
	float p,i,n,r;
	 /* Input principle, rate and time */
	printf("Enter Intial Value ");
	scanf("%f",&i);
	
	printf("Enter Rate of interest ");
	scanf("%f",&r);
	
	printf("Enter Number Of Years ");
	scanf("%f",&n);
	
	 /* Calculate simple interest */
	p=(i*n*r)/100;
	printf("Simple interest is %f",p);
	return 0;
}
