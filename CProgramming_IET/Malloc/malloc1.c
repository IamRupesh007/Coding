#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int noofele,i; // no of element and i
	
	printf("\n Enter no. of element you want ");
	scanf("%d",&noofele);
	 
	ptr=(int*)malloc(sizeof(int)*noofele);//5
	

	
	printf("\n Enter elements you want: ");
	
	for(i=0;i<noofele;i++)
	{
		scanf("%d",ptr[i]);//valid
	}
	for(i=0;i<noofele;i++)
	{
		printf("\t%d ",ptr[i]);//valid
	}
	free(ptr);
}
