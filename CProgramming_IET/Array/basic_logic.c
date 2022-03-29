//array is a const. pointer
#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int i=0;
	int *ptr=arr; // pointer and array assigned
	//arr=arr+1 , error
	for(i=0;i<5;i++)
	{
		printf("\n Address of array[%d] = %d",i,&arr[i]);
		printf("\n Value of araay [%d]= %d",i,arr[i]);
		printf("\n Value o prt= %d",ptr);
		ptr++;
	}
	
	return 0;
}
