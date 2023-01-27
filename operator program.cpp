#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if((ch=='+')||(ch=='-')||(ch=='/')||(ch=='*'))	
	{
		printf("it is an operator");
	}
	else
	{
		printf("it is not an operator");
	}
} 
