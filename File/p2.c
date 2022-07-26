// you can 
#include<stdio.h>


#define add(x,y)  printf("addition is : %d",(x+y)) /printf("\nsubtract is  : %d",(x-y)) / printf("\nMultiple is :  %d",(x*y)); 
int main()
{
	
	int a,b;
	printf("enter two value :");
	scanf("%d%d",&a,&b);
	add(a,b);
	printf("\ncurrent date is : %s",__DATE__);
	printf("\ncurrent date is : %s",__TIME__);
}

