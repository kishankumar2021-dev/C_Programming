//wap valume of cilender
#include<stdio.h>
int main()
{
	
	
	int redius,h;
	float pi=3.14,cilender;
	printf("Valume of cilender :\n");
	printf("Enter redius of cilender : \n");
	scanf("%d",&redius);
	
	printf("Enter height of cilendre : \n");
	scanf("%d",&h);
	cilender=pi*(redius*redius)*h;
	printf("Valume of cilender : %.20f",cilender);
	
	
	
}
