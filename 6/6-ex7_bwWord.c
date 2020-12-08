//
//  6-ex7_bwWord.c - print the input word backward
//  - Solution to Programming Exercise 7, Chapter 6, C Primer Plus, 6th. Page 242
//
//  Created by Yinghua Han on 8/24/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>
# include <string.h>

int main(void)
{
	char w[30];
	int i;

	printf("Please enter a word (less than 30 letters).\n");
	scanf("%s", w);

	printf("\n%s in backward is ", w);
	for (i = strlen(w) - 1; i >= 0; i--)
		printf("%c", w[i]);

	printf(".\n");

	return 0;

}