//
//  7-ex7_weekPayment.c - calculate the payment in a week.
//  - Solution to Programming Exercise 7, Chapter 7, C Primer Plus, 6th. Page 296
//
//  - Write a program that requests the hours worked in a week and then prints the gross pay, 
//    the taxes, and the net pay. Assume the following:
//		a. Basic pay rate = $10.00/hr
//		b. Overtime (in excess of 40 hours) = time and a half 
//		c. Tax rate: 
//			15% of the first $300
//			20% of the next $150
//			25% of the rest
//	  Use #define constants, and don’t worry if the example does not conform to current 
//    tax law.
//
//  Created by Yinghua Han on 10/14/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

# define RATE 			10
# define OVERTIME 		40
# define OVERTIMERATE 	(1.5 * RATE)
# define BASICPAYMENT	(RATE * OVERTIME)

# define TAX300RATE		0.15
# define TAX300P150RATE	0.2
# define TAXOVER450RATE	0.25
# define TAX300			(300 * TAX300RATE)
# define TAX300P150 	(150 * TAX300P150RATE)

int main(void)
{
	double hrs, grossPay, tax, netPay;

	printf("How many hours did you work this week?\n");
	scanf("%lf", &hrs);

	// calculate the gross pay
	if (hrs <= OVERTIME)
		grossPay = hrs * RATE;
	else
		grossPay = (hrs - OVERTIME) * OVERTIMERATE + BASICPAYMENT;

	// calculate the taxes
	if (grossPay <= 300)
		tax = grossPay * TAX300RATE;
	else if (grossPay > 300 && grossPay <= 450)
		tax = (grossPay - 300) * TAX300P150RATE + TAX300;
	else
		tax = (grossPay - 450) * TAXOVER450RATE + TAX300 + TAX300P150;

	netPay = grossPay - tax;

	printf("You worked %.2lf hours this week, the gross pay is $%.2lf, the taxes is $%.2lf,"
		" and the net pay is $%.2lf.\n", hrs, grossPay, tax, netPay);

	return 0;
}