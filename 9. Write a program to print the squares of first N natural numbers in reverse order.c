//9. Write a program to print the squares of first N natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
main()
{
	int count=1, number, square;
	printf("Enter Squares of first N natural numbers = ");
	scanf("%d",&number);
	
	while(count<=number)
	{
		square=number*number;
		printf("\n %d",square);
		number-=1;
	}
	getch();
}
