//  praise1.c -- uses an assortment of strings
//  - Listing 4.2, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/18/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

# define PRAISE "You are an extraordinary being."

int main(void)
{
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	// The function scanf() only gets the first word of the input for name. 
	// To get a phrase uses fgets() etc..

	return 0;

}