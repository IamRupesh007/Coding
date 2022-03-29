//sum of 1 to ‘N’ even numbers. (Use while loop)

#include<stdio.h>
int main()
{
	int i=1,a,sum=0;
	printf("sum of even numbers from 1 to ");
	scanf("%d",&a);
	while(i<=a)
	{
		if(i%2==0)
		{
		sum+=i;
		}
		i++;
	}
	printf("is %d",sum);
}
