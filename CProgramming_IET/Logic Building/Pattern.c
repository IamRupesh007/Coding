//pattern2
#include<stdio.h>
int main()
{
	int i,j,cnt=1;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d ",cnt);
		cnt++;
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
