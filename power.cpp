/*iii)
*
* * *
* * * * *
* * * * * * *
...................... (number of lines to be inputted by user)  */
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j<=2*i-1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
