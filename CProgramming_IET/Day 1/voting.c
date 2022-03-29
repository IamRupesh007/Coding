/* 8. check whether a person is eligible for voting or not
 */

#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("enter your age= ");
	scanf("%d",&a);
	if(a<18)
	{
		printf("You are kid");
	}	
	else
	{
		printf("Enjoy Voting");
	}
	return 0;
}