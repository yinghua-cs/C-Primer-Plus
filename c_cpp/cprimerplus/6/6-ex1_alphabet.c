//
//  6-ex1_alphabet.c - stores 26 lowercase letters in an array
//  - Solution to Programming Exercise 1, Chapter 6, C Primer Plus, 6th. Page 241
//
//  Created by Yinghua Han on 8/22/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	const int SIZE = 26;
	char alpha[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
		alpha[i] = 'a' + i;
	
	printf("Here are the array:");
	for (i = 0; i < SIZE; i++)
		printf("%c ", alpha[i]);

	printf("\n");

	return 0;
}