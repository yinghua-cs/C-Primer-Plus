//  colddays.c -- finds percentage of days below freezing
//  - Listing 7.1, Chapter 7, C Primer Plus, 6th. Page 246.
//
//  Created by Yinghua Han on 9/9/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;

	printf("Enter the list of daily low temperatures.\n");
	printf("Use Celsius, and enter q to quit.\n");

	while (scanf("%f", &temperature) == 1)
	{
		all_days++;
		if (temperature < FREEZING)
			cold_days++;

		// real time updates
		// printf("%d days total: %.1f%% were below freezing.\n", 
		// 		all_days, 100.0 * (float) cold_days / all_days);
	}
	if (all_days != 0)
		printf("%d days total: %.1f%% were below freezing.\n", 
			all_days, 100.0 * (float) cold_days / all_days);
	if (all_days == 0)
		printf("No data entered!\n");

	return 0;
}