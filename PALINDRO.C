/*write a program check number palindrome num or not
Date:-28/12/2021*/

#include<stdio.h>
#include<conio.h>
void main ()
{
	int n,v,r,rev=0;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);
	v=n;
	while(n!=0)
	{
	    r=n%10;
	    rev=rev*10+r;
	    n=n/10;
	}
	  if(v==rev)
	{
	      printf("%d palindrome number",v);
	}
	  else
	{
	      printf("%d not palindrome number",v);
	}
	  getch();
}