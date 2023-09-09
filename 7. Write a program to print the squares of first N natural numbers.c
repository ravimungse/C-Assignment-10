//7. Write a program to print the squares of first N natural numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int count=1,number,square;
	printf("\n Enter how much Square of natural numbers you want to print = ");
	scanf("%d",&number);
	
	while(count<=number)
	{
		square=count*count;
		printf("\n %d",square);
		count++;
	}
}
