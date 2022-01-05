/*write a program to enter any number and print sum of is digit
Date:-22/12/2021*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,sum=0;
	clrscr();
	printf("\n enter any number:");
	scanf("%d",&n);
	while(n>0)
	{
	     s=n%10;
	     sum=sum+s;
	     n=n/10;
	}
	 printf("sum:%d",sum);
	 getch();
}