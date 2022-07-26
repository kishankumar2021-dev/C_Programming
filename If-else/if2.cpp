//wap to check a persion is eligilble for HR or not 
//only female candidate are no allowed
//enter m for male & f for female


#include<stdio.h>
#include<conio.h>
int main()
{
	char gen;
	printf("Enter m if you,re male and f- if you,re female :");
	gen=getch();
	if(gen=='f')
	{
		printf("\nYes !! you are eligible to Apply:");
		
	}
	if(gen!='f')
	{
		printf("\nNo!! you are not eligible :");
		
	}
	
	
	
}
