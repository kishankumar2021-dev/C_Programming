//wap to print cube of a umber only is number is positive
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	if(num>0)
	{
		int cube;
	
	cube=num*num*num;
	printf("Cube is  : %d",cube);
    } 
	
}
