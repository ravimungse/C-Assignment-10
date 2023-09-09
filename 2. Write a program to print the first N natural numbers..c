//2. Write a program to print the first N natural numbers.
#include<stdio.h>
#include<conio.h>
main()
{
	int a,i=1;
	printf("Enter how many natural numbers you want to print = ");
	scanf("%d",&a);
	
	while(i<=a)
	{
		printf("\n %d",i);
		i++;
	}
	getch();
}
