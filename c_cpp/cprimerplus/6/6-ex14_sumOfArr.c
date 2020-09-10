//
//  6-ex14_sumOfArr.c - calculate the cumulative totals and print them out.
//  - Solution to Programming Exercise 14, Chapter 6, C Primer Plus, 6th. Page 243
//
//  Created by Yinghua Han on 9/6/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	const int SIZE = 8;

	double arr1[SIZE], arr2[SIZE];
	int i;

	printf("Please enter %d values.\n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		scanf("%lf", &arr1[i]);

		if (i == 0) 
			arr2[i] = arr1[i];
		else
			arr2[i]	= arr2[i - 1] + arr1[i];
	}

	i = 0;
	do
	{
		printf("%lf\t", arr1[i]);
		i++;
	}
	while(i < SIZE);
	printf("\n");

	i = 0;
	do
	{
		printf("%lf\t", arr2[i]);
		i++;
	}
	while(i < SIZE);
	printf("\n");

	return 0;
}