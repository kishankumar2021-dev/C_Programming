#include<stdio.h>
#include<conio.h>
int main()
{
	int redius;
	float circle ,p=3.14;
	
	printf("Enter redius of circle\n ");
	scanf("%d",&redius);
    circle=p*(redius*redius);
	printf("Area of circle = %f",circle);
	return 0;
}
