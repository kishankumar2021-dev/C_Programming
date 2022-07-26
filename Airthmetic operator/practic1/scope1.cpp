#include<stdio.h>
int a=58;//globle var...
 void fun();
int main()
{
//int a=20; //local var....
	printf("var1 = %d",a);
	fun();
}
void fun()
{
	int var=20;
	printf("var = %d",var);
}
