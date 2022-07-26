//wap to input p
#include<stdio.h>
 main()
{
	float per;
	printf("Enter your percentage :");
	scanf("%f",&per);
	if(per>=0 && per<=32)    //per <0 || per >0100 so not chech conditiin
	{
       printf("you are fail");
       
	}
	else if (per>=33 && per <=44)
	{
		printf("You are pass third division");
		printf("Please fouce your study");
		
	}
	else if(per>=45 && per<59)
	{
		printf("You are passed with second division");
		printf("\n Your performance is not good");
		
	}
	else if(per>=60 && per<=100)
	{
		printf("Congratulation!!!!\n");
		printf("You are passed with frist division");
	}
	else{
		printf("Invalide input ///try Agai")
	}
}
