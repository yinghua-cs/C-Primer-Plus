//
//  6-ex5_alphabetPyramid.c - shows a alphabet pyramid upto the input letter
//  - Solution to Programming Exercise 5, Chapter 6, C Primer Plus, 6th. Page 242
//
//  Created by Yinghua Han on 8/23/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int i, j1, j2, j3, line;
	char c;

	printf("Please enter a uppercase letter.\n");
	scanf("%c", &c);
	printf("\n\nHere is the alphabet pyramid!\n\n");

	line = c - 'A' + 1;

	for (i = 0; i < line; i++)
	{
		for (j1 = 1; j1 < (line - i); j1++)	// print out the space at the beginning
			printf(" ");
		
		for (j2 = 0; j2 <= i; j2++)	// print out the letters in ascending order
			printf("%c", 'A' + j2);
		
		for (j3 = j2 - 2; j3 >= 0; j3--)	// print out the letters in descending order
			printf("%c", 'A' + j3);

		printf("\n");

	}

	return 0;
}