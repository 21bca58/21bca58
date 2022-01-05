/*write a program to enter any number and check it's prime number or not
Date:22/12/2021*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("\n enter any number\n");
	scanf("%d",&n);
	for(i=2;i<=(n-1);i++)

	    if(n%i==0)
	    break;
	    if(i==n)

	    printf("\n %d is prime number",n);
	    else
		printf("\n %d is not a prime numkber",n);

	  getch();
}