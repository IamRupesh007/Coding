//determine percentage and class of student result
#include<stdio.h>
int main()
{
	int eng,sci,math,geo,hist;
	float obt,per;
	printf("Enter the marks \n");
	scanf("%d%d%d%d%d",&eng,&sci,&math,&geo,&hist);
	printf("Eng %d \nSci %d \nMath %d \nGeo %d \nHist %d",eng,sci,math,geo,hist);
	float total=500;
	obt=(eng+sci+math+geo+hist);
	printf("\nOpt %.2f \n",obt);
	per=(obt/total)*100;
	
	printf("Per %.2f \n",per);
	
	if(per>=75) 
	printf("Desitinction with %.2f",per);
	else if(per>=65) 
	printf("First class with %.2f",per);
	else if(per>=55) 
	printf("Second class with %.2f",per);	
	else if(per>=38) 
	printf("Third class with %.2f",per);
	else 
	printf("You have failed the exam");
	return 0;
}
