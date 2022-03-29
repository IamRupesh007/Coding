/* 5.	Write a C program to find quotient and remainder.
 Read divisor and dividend and then find the quotient and remainder, 
 results will be printed on the screen
 */
 #include<stdio.h>
 int main()
 {
 	int i,j,q,r;
 	printf("Enter Dividend and Divisor \n");
 	scanf("%d%d",&i,&j);
 	
 	q=i/j;
 	r=i%j;
 	
 	printf("Dividend= %d \n Divisor= %d \n Quotient= %d \n Remainder= %d",i,j,q,r);
 	
 	return 0;
 }
