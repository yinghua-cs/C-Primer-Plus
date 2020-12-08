//
//  6-ex17_saving.c - saving interest calculation.
//  - Solution to Programming Exercise 17, Chapter 6, C Primer Plus, 6th. Page 244
//
//  Created by Yinghua Han on 9/7/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

# define RATE 0.08

int main(void)
{
	float oriInvest = 1e6, wd = 1e5, cur;
	int year;

	cur = oriInvest;
	year = 0;

	while (cur > 0)
	{
		cur = cur + cur * RATE - wd;
		year++;
		// printf("%d year(s), current balance is %f.\n", year, cur);
	}

	printf("It takes %d years to empty the account.\n", year);

	return 0;

}