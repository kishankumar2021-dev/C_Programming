//wap to check a year is a leap year are not
//divided reminder bache 0 year %4=0,1,2 ,3;
#include<stdio.h>
int main()
{
	int year;
	printf("Enter a yera ti check it si a leap year or not :\n ");
	scanf("%d",&year);
//	 if(year>2000){
	 	if(year%4==0 && year>2001){
	 		printf("Yes ! This year is  a leap year ");
		 }
		 else
		 {
		 	printf("invalide inut");
		 }
	 
}
