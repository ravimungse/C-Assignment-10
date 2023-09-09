//5. Write a program to print the first N even natural numbers in reverse order.
#include<stdio.h>
#include<conio.h>
main()
{
	int count=2, number,c;
	printf("Enter First N Even Natural numbers you want to Print in reverse order = ");
	scanf("%d",&number);
	c=number*2;
	while(count<=c)
	{
		printf("\n %d",c);
		c-=2;
	}
}
