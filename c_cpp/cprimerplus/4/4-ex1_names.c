//
//  4-ex1_names.c - printing last, first name
//  - Solution to Programming Exercise 1, Chapter 4, C Primer Plus, 6th. Page 140
//
//  Created by Yinghua Han on 6/15/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	char last_name[20], first_name[20];

	printf("Please enter your first name.\n");
	scanf("%s", first_name);
	
	printf("Now enter your last name.\n");
	scanf("%s", last_name);

	printf("You are %s, %s. :)\n", last_name, first_name);

	return 0;
}