//
//  6-ex16_invest.c - calculate investment.
//  - Solution to Programming Exercise 16, Chapter 6, C Primer Plus, 6th. Page 243
//
//  Created by Yinghua Han on 9/7/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	const float RATE1 = 0.1, RATE2 = 0.05;
	const float INVEST1 = 100, INVEST2 = 100;

	double cur1, cur2;
	int year;
	
	cur1 = INVEST1;
	cur2 = INVEST2;
	year = 0;

	while (!(cur1 < cur2))
	{
		cur1 += INVEST1 * RATE1;
		cur2 += cur2 * RATE2;
		year++;
	}

	printf("It takes %d years for the 5%% compounded investment (%.2lf) exceed the 10%% simple investment (%.2lf).\n", 
	year, cur2, cur1);

	return 0;

}