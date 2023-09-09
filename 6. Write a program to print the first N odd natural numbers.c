//6. Write a program to print the first N odd natural numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int count=1, number;
	printf("\n Enter the N Odd natural numbers you want to print = ");
	scanf("%d",&number);
	
	while(count<=number*2)
	{
		printf("\n %d",count);
		count+=2;
	}
	getch();
}
