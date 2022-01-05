/*write a program to enter any number check it is Armstrong or not
Date:-24/12/2021*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,sum=0;
	clrscr();
	printf("\n enter the number:");
	scanf("%d",&x);
	z=x;
	while(x>0)
	{
	     y=x%10;
	     sum=sum+(y*y*y*y);
	     x=x/10;
	}
	if(sum==z)
	{
		printf("\n %d Number is armstong",sum);
	}
	else
	{
		printf("\n %d Number is not armstong",sum);
	}
	getch();
}