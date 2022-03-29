/* 6.	Write a Program to calculate simple interest SI=pnr/100
 */

#include<stdio.h>
int main()
{
	float p,n,r,SI;
	printf("enter Cost Price= \n");
	scanf("%f",&p);
	printf("enter rate of interest= \n");
	scanf("%f",&r);
	printf("enter no. of years= \n");
	scanf("%f",&n);
	SI=(p*n*r)/100;
	printf("Simple interest= %f",SI);
	return 0;
}