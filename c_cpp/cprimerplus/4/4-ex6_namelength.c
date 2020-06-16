//  4-ex6_namelength.c - the length of names
//  - Solution to Programming Exercise 6, Chapter 4, C Primer Plus, 6th. Page 141
//
//  Created by Yinghua Han on 6/16/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>
# include <string.h>

int main(void)
{
	char firstname[20], lastname[20];

	printf("Please enter your first name, and last name.\n");
	scanf("%s%s", firstname, lastname);

	printf("%s %s\n", firstname, lastname);
	printf("%*zd %*zd\n", (int)strlen(firstname), strlen(firstname), (int)strlen(lastname), strlen(lastname));
	printf("%s %s\n", firstname, lastname);
	printf("%-*zd %-*zd\n", (int)strlen(firstname), strlen(firstname), (int)strlen(lastname), strlen(lastname));

	return 0;

}