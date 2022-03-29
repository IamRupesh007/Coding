/* 11. check it is alphabet or digit
 */

#include<stdio.h>
int main()
{
	char c;
	printf("enter a Character= ");
	scanf("%c",&c);


	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
	{
		printf("Character is Alphabet");
	}	
	else if(c>='0' && c<='9')
	{
		printf("Character is Digit");
	}
		else 
	{
		printf("It is a special character");
	}	
	return 0;
}