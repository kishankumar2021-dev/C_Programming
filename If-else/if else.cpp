#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a lowercase charecter:");
	ch=getchar();
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
	
	ch=ch-32;
	printf("Charecter is upercase :%c",ch);
    }
    else
    {
    	printf("Charcter is not a alphabet.can not converted into uppercase");
	}
}
