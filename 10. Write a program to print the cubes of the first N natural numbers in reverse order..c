//10. Write a program to print the cubes of the first N natural numbers in reverse order.
#include<stdio.h>
#include<conio.h>
main()
{
	int count=1, number, cube;
	printf("program to print the cubes of the first N natural numbers in reverse order.");
	printf("\n Enter N number = ");
	scanf("%d",&number);
	
	while(count<=number)
	{
		cube=number*number*number;
		printf("\n %d",cube);
		number-=1;
	}
	getch();
}
