#include<stdio.h>
int main()
{
	int i,add=0,rem;
	printf("Enter any number!!!");
	scanf("%d",&i);
	while(i>0){
		rem=i%10;
		add=add+rem;
		i/=10;
		printf("%d",add);
		
	}
//	printf("Total addition of number",add);
//	return 0;
}
