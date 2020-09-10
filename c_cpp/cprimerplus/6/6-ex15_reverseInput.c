//
//  6-ex15_reverseInput.c - prints the reverse input.
//  - Solution to Programming Exercise 15, Chapter 6, C Primer Plus, 6th. Page 243
//
//  Created by Yinghua Han on 9/6/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>
# include <string.h>

int main(void)
{
	const int SIZE = 256;

	char st[SIZE];
	int i;

	printf("Enter a line.\n");
	i = 0;
	scanf("%c", &st[i]);
	while (st[i] != '\n')
	{
		i++;
		scanf("%c", &st[i]);
	}

	for (i = strlen(st) - 2; i >= 0; i--)
	{
		printf("%c", st[i]);
	}
	printf("\n");

	return 0;
}