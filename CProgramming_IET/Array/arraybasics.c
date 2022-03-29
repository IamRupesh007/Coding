//
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
		printf("\n Value o prt= %d\n",*ptr);
		ptr++;
	}
	printf("\nNext is for print_array function\n");
	print_array(arr);
	printf("\nNext is for fun function\n");
	fun(arr);
	return 0;
}

void print_array(int *p) //int *p=arr
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n %d ",*(p+i));//*(p+i)=3+2  2+3
		printf("%d ",*(i+p)); //in output= columns are for all this printf in "for" 
		printf("%d ",p[i]); // in output= rows are for loops of i
		printf("%d ",i[p]);// *(i+p)
		
	}	
	return;//this is not necessary to write	
}

void fun(int *p)
{	int i;
	for(i=0;i<5;i++)
	printf("%d\n",(-2)[p]);
	
	return;
}
