//
//  7-ex2_ASCIIcode.c - prints ASCII decimal code of input character.
//  - Solution to Programming Exercise 2, Chapter 7, C Primer Plus, 6th. Page 296
//
//  - Write a program that reads input until encountering #. Have the program print each 
//    input character and its ASCII decimal code. Print eight character-code pairs per line. 
//    Suggestion: Use a character count and the modulus operator (%) to print a newline 
//    character for every eight cycles of the loop.
//
//  Created by Yinghua Han on 10/13/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	int pc = 0;
	char ch;

	printf("Enter character to show its ASCII code...\n");
	while ((ch = getchar()) != '#')
	{
		pc++;
		if (ch == '\n')
			printf("\\n:%3d  ", (int)ch);
		else
			printf("%2c:%3d  ", ch, (int)ch);
		if (pc % 8 == 0)
			printf("\n");

		if (ch == '\n')		// adjust the format for the next output
		{
			printf("\n\n");
			pc = 0;
		}
	}
	printf("\n\n");

	return 0;
}