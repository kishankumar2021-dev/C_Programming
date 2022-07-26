#include<stdio.h>
#include<conio.h>
int main()
{
	 int  n1,n2;
	 char op;
	 int result;
	 //clrscr();
	 printf(" enter   a two number ");
	 scanf("%d%d",&n1,&n2);
	 printf("\n\nEnter the opration\n ");
	 op=getche();
	 switch(op)
	 {
	 	case '+':result = n1+n2;
	 	printf("\naddition %d",result);
	 	break;
	 	
	 	
	 	
	 	case'-':result = n1*n2;
	 	printf("\nsubtraction = %d",result);
	 	case'*': result = n1*n2;
	 	printf("\nmultiplication=%d",result);
	 	break;
	 	case'/': result=n1/n2;
	 	printf("\n division = %d",result);
	 	default:
	 	printf("\n invalid value");
	 	break;
	 }
	 
}
