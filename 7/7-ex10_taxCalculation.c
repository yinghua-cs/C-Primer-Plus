//
//  7-ex10_taxCalculation.c - calculates the tax.
//  - Solution to Programming Exercise 10, Chapter 7, C Primer Plus, 6th. Page 297
//
//  - The 1988 United States Federal Tax Schedule was the simplest in recent times. It had 
// 	  four categories, and each category had two rates. Here is a summary (dollar amounts 
// 	  are taxable income):
//
// 	  Category 					Tax
// 	  Single 					15% of first $17,850 plus 28% of excess
// 	  Head of Household 		15% of first $23,900 plus 28% of excess
// 	  Married, Joint 			15% of first $29,750 plus 28% of excess
// 	  Married, Separate			15% of first $14,875 plus 28% of excess
// 
//    For example, a single wage earner with a taxable income of $20,000 owes 0.15 × $17,850 
//    + 0.28 × ($20,000−$17,850). Write a program that lets the user specify the tax category 
// 	  and the taxable income and that then calculates the tax. Use a loop so that the user can 
// 	  enter several tax cases.
//
//  Created by Yinghua Han on 10/18/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>
# include <ctype.h>

# define TAXLINE1 	17850
# define TAXLINE2	23900
# define TAXLINE3	29750
# define TAXLINE4	14875

# define TAXRATE1	0.15
# define TAXRATE2	0.28

int main(void)
{
	char category;
	double income, tax, taxLine;

	while(1)
	{
		printf("Which is your tax category?\n"
			"1. Single                 2. Head of Household\n"
			"3. Married, Joint         4. Married, Separate\n"
			"5. Quit\n");

		while (isblank(category = getchar()) || category == '\n')	// isblank() only check ' ' and '\t'
			continue;

		switch(category)
		{
			case '1':
				taxLine = TAXLINE1;
				break;

			case '2':
				taxLine = TAXLINE2;
				break;

			case '3':
				taxLine = TAXLINE3;
				break;

			case '4':
				taxLine = TAXLINE4;
				break;

			case '5':
				break;

			default:
				printf("Please enter 1 to 5.\n");
				continue;

		}

		if (category == '5')	// quit
			break;


		printf("How much is your taxable income?\n");
		if (scanf("%lf", &income) != 1)
		{
			printf("Please enter a valid value.\n");
			continue;
		}

		if (income <= taxLine)
			tax = income * TAXRATE1;
		else
			tax = (income - taxLine) * TAXRATE2 + taxLine * TAXRATE1;

		printf("Your tax is %lf.\n\n", tax);
	}

	return 0;
}