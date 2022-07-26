#include<stdio.h>
int main()
{
	int i,sum=0,rem;
	printf("Enter any number :");
	scanf("%d",&i);
	while(i>0){
		rem=i%10;
		sum+=rem;
		i/=10;
	}
	printf("suof digits= %d",sum);
}
