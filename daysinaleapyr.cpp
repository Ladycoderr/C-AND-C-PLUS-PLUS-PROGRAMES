#include<stdio.h>
main()
{
	int days_in_a_year;
	
	printf("Enter the days in current year ");
	scanf("%d",&days_in_a_year);
	if (days_in_a_year==366)
	printf("its a leap year");
	else if (days_in_a_year==365)
	printf("its a not a leap year");
	else
	printf("invalid input");
	
	
	
	
}
