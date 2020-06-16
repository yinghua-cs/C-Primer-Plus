//  4-ex2_nameformat.c - printing first name in different formats
//  - Solution to Programming Exercise 2, Chapter 4, C Primer Plus, 6th. Page 140-141
//
//  Created by Yinghua Han on 6/15/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>
# include <string.h>

int main(void)
{
	char first_name[20];

	printf("Please enter your first name.\n");
	scanf("%s", first_name);

	printf("\"%s\"\n",first_name);
	printf("\"%20s\"\n",first_name);
	printf("\"%-20s\"\n",first_name);
	printf("%*s\n", (int)strlen(first_name) + 3, first_name);

	return 0;

}
