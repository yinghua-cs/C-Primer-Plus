//
//  7-ex6_sequenceCount.c - reports the number of times that the sequence ei occurs.
//  - Solution to Programming Exercise 6, Chapter 7, C Primer Plus, 6th. Page 296
//
//  - Write a program that reads input up to # and reports the number of times that the
//    sequence ei occurs.
//
//  Created by Yinghua Han on 10/14/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	int seqcount = 0;
	char ch1, ch2;

	while ((ch1 = getchar()) != '#')
	{
		if (ch1 == 'e')
		{
			while ((ch2 = getchar()) == 'e')
				continue;
			if (ch2 == 'i')
				seqcount++;
			else if (ch2 == '#')
				break;
		}
	}

	printf("\nThe sequence ei occurs %d times.\n", seqcount);

	return 0;
}