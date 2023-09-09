//8. Write a program to print the cubes of first N natural numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int count=1, number,cubes;
	printf("Enter The number how many times you want to print Cubes of natural number = ");
	scanf("%d",&number);
	
	while(count<=number)
	{
		cubes=count*count*count;
		printf("\n %d",cubes);
		count++;
	}
	getch();
}
