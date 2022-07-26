//wap to printf 1 to n numbers  using for loop:
#include<stdio.h>
int main()
{
	int i=10,num;
	printf("Enter the number !");
	scanf("%d",&num);
	for(num=num;num<=i;num=num+1)
	{
		printf("%d\n",num);	
	}
	
	{
		printf("!!  invalide input beacuase the value greter then !!  %d",i);
	}
}
