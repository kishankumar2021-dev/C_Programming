#include<stdio.h>
int printvalue();
int main()
{
printvalue();	
}
int printvalue()
{
	static int a=0;
	a=a+10;
	printf("\n value = %d",a );
}
