//  escape.c -- uses escape characters
//  - Listing 3.10, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/7/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	float salary;

	printf("\aEnter your desired monthly salary:"); // 1	\a: sound the alert
	printf(" $_______\b\b\b\b\b\b\b");				// 2	\b: backspace but doesn't erase the characters
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", 
		salary, salary * 12.0);						// 3
	printf("\rGee!\n");								// 4	\r: place the cursor at the beginning of current line

	return 0;
}