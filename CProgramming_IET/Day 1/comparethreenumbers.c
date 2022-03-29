/* 9. find largest number among two numbers
 */

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter a NUMBER= ");
	scanf("%d",&a);
	printf("enter B Number= ");
	scanf("%d",&b);
	printf("enter C Number= ");
	scanf("%d",&c);

	if(a>b && a>c)
	{
		printf("Number A is bigger");
	}	
	else if(b>a && b>c)
	{
		printf("No.B is bigger ");
	}
	else if(c>a && c>b)
	{
		printf("No.C is bigger ");
	}

	else 
	{
		printf("All are equal");
	}	
	return 0;
}