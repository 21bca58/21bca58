/*write a program pattern number
Date:29/12/2021*/

#include<stdio.h>
#include<conio.h>
void main()
{
      int i,j;
      clrscr();
      for(i=3;i>=0;i--)
      {
	for(j=0;j<=i;j++)
	{
	    printf("*");
	}
	    printf("\n");
       }
	 getch();
}