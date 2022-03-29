/* 5. find quotient and remainder. Read divisor and dividend and then find the   quotient and remainder, results will be printed on the screen
 */

#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a dividend= ");
	scanf("%d",&a);
	printf("enter a divisor= ");
	scanf("%d",&b);
	c=a/b;
	d=a%b;
	printf("Quotient is = %d \n",c);	
	printf("Remiander is = %d",d);
	return 0;
}