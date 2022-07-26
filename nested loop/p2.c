//wap a program to armstrong numbers:
#include<stdio.h>
int main()
{
	int num,n,cube,d,sum,i;
	printf("arstrong numbers are :\n");
	for(num=4;num<=999;i++)
	{
		n=num;
		sum=0;
		while(n>0)
		{
			d=n%10;
			n/10;
			cube=d*d*d;
			sum=sum+cube;
			
		}
		if(num==sum)
		{
			printf("%d\n",num);
			
		}
		
	 } 
}
