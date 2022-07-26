#include<stdio.h>
int main()
{
	const int val=100;
	float pa,rate,time,si;
	printf("Enter principle amount :\n");
    scanf("%f",&pa);
	printf("Enter rate intrest :\n");
    scanf("%f",&rate);
	printf("Enter time  :\n");
    scanf("%f",&time);
	si=(pa*rate*time)/val;
	printf("Total simple intrest for %f\n ",rate,time,si);
		
}
