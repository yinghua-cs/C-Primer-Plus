//
//  7-ex1_charcount.c - calculate the number of spaces, newline characters and other characters.
//  - Solution to Programming Exercise 1, Chapter 7, C Primer Plus, 6th. Page 296
//
//  - Write a program that reads input until encountering the # character and then reports 
//    the number of spaces read, the number of newline characters read, and the number of all 
//    other characters read.
//
//  Created by Yinghua Han on 10/13/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	int sc = 0;		// spaces count
	int nc = 0;		// newline character count
	int oc = 0;		// other characters count
	char ch;

	printf("Enter some text for counting...\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ') 
			sc++;
		else if (ch == '\n') 
			nc++;
		else 
			oc++;
	}

	printf("%d spaces, %d newline characters, %d others.\n", sc, nc, oc);


	return 0;
}