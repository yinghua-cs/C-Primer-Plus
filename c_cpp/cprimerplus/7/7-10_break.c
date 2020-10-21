//  break.c -- uses break to exit a loop
//  - Listing 7.10, Chapter 7, C Primer Plus, 6th. Page 277.
//
//  Created by Yinghua Han on 9/26/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	float length, width;

	printf("Enter the length of the rectangle:\n");
	while (scanf("%f", &length) == 1)
	{
		printf("Length = %0.2f:\n", length);
		printf("Enter its width:\n");
		if (scanf("%f", &width) != 1)
			break;
		printf("Width = %0.2f:\n", width);
		printf("Area = %0.2f:\n", length * width);
		printf("Enter the length of the rectangle:\n");
	}
	printf("Done.\n");

	return 0;
}