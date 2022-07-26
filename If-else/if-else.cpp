#include<stdio.h>
int main()
{
	char alpha;
	printf("Entera character :");
	alpha=getchar();
	if((alpha>='a' && alpha<='z')||(alpha>='A' && alpha<='Z'))
	{
		if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o'||  alpha=='u'|| alpha=='A'|| alpha=='E'|| alpha=='O'|| alpha=='U'|| alpha=='I')
		{
			printf("Charter is a vovel");
		}
		else
		{
			printf("Chareter is consonant");
			
		}
	}
	else
	{
		printf("Charter is not alphabet");
	}
}
