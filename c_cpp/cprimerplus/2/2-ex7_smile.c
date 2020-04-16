//
//  2-ex7_smile.c - use functions
//  - Solution to Programming Exercise 7, Chapter 2, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 2/4/19.
//  Copyright © 2019 Yinghua Han. All rights reserved.
//

# include <stdio.h>

void sml()
{
	printf("Smile!");
}

int main(void)
{
	sml();
	sml();
	sml();
	printf("\n");
	sml();
	sml();
	printf("\n");
	sml();
	printf("\n");

	int i,j;

	for (i = 3; i > 0; i--)
	{
		for (j = 1; j <= i; j++)
			sml();

		printf("\n");
	}
	return 0;
}