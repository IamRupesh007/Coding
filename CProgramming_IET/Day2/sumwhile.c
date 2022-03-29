/* print sum of 1 to 10 Natural numbers. (Use while loop)
*/
#include<stdio.h>
int main()
{
	int i=1,sum=0; //initial value declaration
	while(i<=10) //upto 10 because we need su upto 10 no.s
	{
		sum = sum + i; //this loop will continue from i=1 to 10 and sum will e assigned new calue each time
		++i;
	} //loop is closed with final value stored in sum
	printf("Sum of 1 to 10 is %d",sum); //ouput
	return 0;
}
