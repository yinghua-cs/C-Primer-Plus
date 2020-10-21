//
//  7-ex8_weekPayment2.c - calculate the payment in a week.
//  - Solution to Programming Exercise 8, Chapter 7, C Primer Plus, 6th. Page 297
//
//  - Modify assumption a. in exercise 7 so that the program presents a menu of pay rates 
//	  from which to choose. Use a switch to select the pay rate. The beginning of a run 
//	  should look something like this:
//	  ***************************************************************** 
//	  Enter the number corresponding to the desired pay rate or action: 
//	  1) $8.75/hr 							2) $9.33/hr
//	  3) $10.00/hr 							4) $11.20/hr
// 	  5) quit 
//	  *****************************************************************
//
//	  If choices 1 through 4 are selected, the program should request the hours worked. The 
//	  program should recycle until 5 is entered. If something other than choices 1 through 5 
//	  is entered, the program should remind the user what the proper choices are and then 
//	  recycle. Use #defined constants for the various earning rates and tax rates.
//
//  Created by Yinghua Han on 10/14/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

# define RATE1 			8.75
# define RATE2 			9.33
# define RATE3 			10.00
# define RATE4 			11.20
# define OVERTIME 		40
# define OVERTIMERATE	1.5

# define TAX300RATE		0.15
# define TAX300P150RATE	0.2
# define TAXOVER450RATE	0.25
# define TAX300			(300 * TAX300RATE)
# define TAX300P150 	(150 * TAX300P150RATE)

int main(void)
{
	double rate, hrs, grossPay, tax, netPay;
	int choice;

	while (1)
	{
		printf("*****************************************************************\n"
			"Enter the number corresponding to the desired pay rate or action:\n"
			"1) $8.75/hr                            2) $9.33/hr\n"
			"3) $10.00/hr                           4) $11.20/hr\n"
			"5) quit\n"
			"*****************************************************************\n");
	  	scanf("%d", &choice);

	  	switch(choice)
	  	{
	  		case 1:
	  			rate = RATE1;
	  			break;
	  		case 2:
	  			rate = RATE2;
	  			break;
	  		case 3:
	  			rate = RATE3;
	  			break;
	  		case 4:
	  			rate = RATE4;
	  			break;
	  		case 5:
	  			break;
	  		default:
	  			printf("Please enter 1 ~ 5.\n");
	  			continue;
	  	}
	  	if (choice == 5)
	  		break;

		printf("How many hours did you work this week?\n");
		scanf("%lf", &hrs);

		// calculate the gross pay
		if (hrs <= OVERTIME)
			grossPay = hrs * rate;
		else
			grossPay = (hrs - OVERTIME) * rate * OVERTIMERATE + OVERTIME * rate;

		// calculate the taxes
		if (grossPay <= 300)
			tax = grossPay * TAX300RATE;
		else if (grossPay > 300 && grossPay <= 450)
			tax = (grossPay - 300) * TAX300P150RATE + TAX300;
		else
			tax = (grossPay - 450) * TAXOVER450RATE + TAX300 + TAX300P150;

		netPay = grossPay - tax;

		printf("You worked %.2lf hours this week, the gross pay is $%.2lf, the taxes is $%.2lf,"
			" and the net pay is $%.2lf.\n\n", hrs, grossPay, tax, netPay);
	}

	return 0;
}