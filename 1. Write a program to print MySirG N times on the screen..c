//1. Write a program to print MySirG N times on the screen.
#include<stdio.h>
#include<conio.h>
main()
{
	int a,i=1;
	printf("Enter how many time you want to printf MySirG on Screen = ");
	scanf("%d",&a);
	while(i<=a)
	{
		printf("\n MySirG");
		i++;
	}
	getch();
}
