/* 9. find largest number among two numbers
 */

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("enter no.1= ");
	scanf("%d",&a);
	printf("enter no.2= ");
	scanf("%d",&b);

	if(a<b)
	{
		printf("No.2 Is Biggger");
	}	
	else if(a>b)
	{
		printf("No.1 is bigger ");
	}
	else 
	{
		printf("Both are equal");
	}	
	return 0;
}