//Sum and average using array
#include<stdio.h>
int arr[5];
int main()
{
	int arr[5];
	printf("Enter 5 numbers \n");
	int i=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	for(i=0;i<5;i++)
	{
		sum = sum + arr[i];
	}
	printf("Sum of arr : %d\n",sum);
	printf("Avg of arr: %f",(float)sum/5);
	return 0;	
}
