//  scores_in.c -- uses loops for array processing
//  - Listing 6.19, Chapter 6, C Primer Plus, 6th. Page 228.
//
//  Created by Yinghua Han on 8/3/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

# define SIZE 10
# define PAR 72

int main(void)
{
	int index ,score[SIZE];
	int sum = 0;
	float average;

	printf("Enter %d golf scores:\n", SIZE);
	for (index = 0; index < SIZE; index++)
		scanf("%d", &score[index]);	// read in the ten scores
	
	printf("The scores read in  are as follows:\n");
	for (index = 0; index < SIZE; index++)
		printf("%5d", score[index]); // verify input
	printf("\n");

	for (index = 0; index < SIZE; index++)
		sum += score[index];		// add them up
	average = (float) sum / SIZE;	// time-honored method

	printf("Sum of scores = %d, average = %.2f\n", sum, average);
	printf("That's a handicap of %.0f.\n", average - PAR);

	return 0;

}	