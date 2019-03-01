//
//  ex3_age.c
//  - Solution to Programming Exercise 3, Chapter 2, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 2/4/19.
//  Copyright © 2019 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	int age_year, age_day;

	age_year = 2019 - 1984;
	age_day = age_year * 365;

	printf("I am %d years old, which is %d days\n", age_year, age_day);
	printf("I am %d years old, which is %d days\n", 2019 - 1984, 365 * (2019 - 1984));

}