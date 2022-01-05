/*write a program to enter any number and print in reverse number
Date:-24/12/2021*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&n);
	while(n>0)
	{
	     r=n%10;
	     printf("%d",r);
	     n=n/10;
	}
	  getch();
}