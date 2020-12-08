//
//  5-ex3_wkday.c - change days into weeks and days
//  - Solution to Programming Exercise 3, Chapter 5, C Primer Plus, 6th. Page 187
//
//  Created by Yinghua Han on 7/14/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
// 

# include <stdio.h>

# define DAYSINWEEK 7

int main(void)
{
	// # define DAYSINWEEK 7 /* 放程序定义里也可以？ */
	int days, wk, d;

	printf("Please enter the days (value <= 0 to stop): \n");
	scanf("%d", &days);

	while (days > 0)
	{
		wk = days / DAYSINWEEK;
		d = days % DAYSINWEEK;
		printf("%d days are %d weeks and %d days.\n", days, wk, d);

		printf("Please enter the days (value <= 0 to stop): \n");
		scanf("%d", &days);
	}

	printf("Bye~\n");

	return 0;

}