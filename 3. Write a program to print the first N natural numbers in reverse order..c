//4. Write a program to print the first N even natural numbers.
#include<stdio.h>
#include<conio.h>
main()
{
	int count=2, number;
	printf("Enter The First N Even Natural numbers you want to print = ");
	scanf("%d",&number);
	
	while(count<=number*2)
	{
		printf("\n %d",count);
		count+=2;
	}
	getch();
}
