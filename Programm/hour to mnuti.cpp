#include<stdio.h>
int main()
{

	int h,minute,inminute;
	printf(" Hour :minute = ");
	scanf("%d:%d",&h,&minute);
	inminute=h*60;
    inminute=inminute+minute;
	
	printf("\n %d Hour :%d minute",minute,inminute);
}
