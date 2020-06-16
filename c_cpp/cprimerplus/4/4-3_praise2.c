//  praise2.c -- uses an assortment of strings (2)
//  - Listing 4.3, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/18/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

// try the %u or %lu specifiers if your implementation
// does not recognize the %zd specifier

# include <stdio.h>
# include <string.h>	// provides strlen() prototype

# define PRAISE "You are an extraordinary being."

int main(void)
{
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	// The function scanf() only gets the first word of the input for name. 
	// To get a phrase uses fgets() etc..

	printf("Your name of %zd letters occupies %zd memory cells.\n", 
		strlen(name), sizeof name);
	printf("The phrase of praise has %zd letters ", 
		strlen(PRAISE));
	printf("and occuppies %zd memory cells.\n", sizeof PRAISE);

	return 0;

}