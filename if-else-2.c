#include<stdio.h>

main()
{
	
	//find if a given number is neutral or not using a ladder if else.
	
	int number;
	
	printf("enter number");
	scanf("%d",&number);
	
	if(number<0)
	{
	   printf("enter the number is Negative");	
	}
	else if(number==0)
	{
		printf("enter the number is neutral");
	}
	else
	{
		printf("enter the number is positive");
	}
}