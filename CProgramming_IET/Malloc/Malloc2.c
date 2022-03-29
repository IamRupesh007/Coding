#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[10];//array of 10 bytes as it is char
	int age;// 10+4 bytes for struct
};

void getdetails(struct student *s)
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("\n Enter Student Name ");
		scanf("%s",(s+i)->name);
		printf("\n Enter Student Age: ");
		scanf("%d",&(s+i)->age);
	}
}

void printdetails(struct student *s)
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("\n Student name ");
		printf("%s",s[i].name);//(s+i)->name
		printf("\n Student Age: ");
		printf("%d",s[i].age);//(s+i)->age
	}
}

//DMA 
int main()
{
	struct student *s1;
	int n=2;
	s1=(struct student *)malloc(sizeof(struct student)*n);
	
	getdetails(s1);
	printdetails(s1);
	
	free(s1);
	return 0;
}
