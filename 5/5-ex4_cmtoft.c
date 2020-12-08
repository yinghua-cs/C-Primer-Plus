//
//  5-ex4_cmtoft.c - change centimeters into feet and inches
//  - Solution to Programming Exercise 4, Chapter 5, C Primer Plus, 6th. Page 187
//
//  Created by Yinghua Han on 7/14/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
// 

# include <stdio.h>

int main(void)
{
	const int INCHESINFOOT = 12;
	const float CMININCH = 2.54;

	float cms, in;
	int ft;

	printf("Please enter a height in centimeters (<= 0 tp quit):\n");
	scanf("%f", &cms);

	while (cms > 0)
	{
		in = cms / CMININCH;
		ft = (int) in / INCHESINFOOT;
		in = in - (ft * INCHESINFOOT);

		printf("%.1f cm = %d feet, %.1f inches\n", cms, ft, in);

		printf("Please enter a height in centimeters (<= 0 tp quit):\n");
		scanf("%f", &cms);
	}

	printf("Bye~\n");

	return 0;
}
