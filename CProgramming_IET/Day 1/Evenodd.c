/* 7. to check whether number is EVEN or ODD
 */

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("enter a number= ");
	scanf("%d",&a);
	printf("Value of a =%d \n",a);
	if(a%2==0)
	{
		printf("The Number is even");
	}	
	else
	{
		printf("The number is odd");
	}
	return 0;
}