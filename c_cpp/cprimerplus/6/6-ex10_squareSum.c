//
//  6-ex10_squareSum.c - calculate the sum of squares from lower limit to upper limit
//  - Solution to Programming Exercise 10, Chapter 6, C Primer Plus, 6th. Page 242
//
//  Created by Yinghua Han on 8/24/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	int i, lv, uv;
	long int sum;

	printf("Enter lower and upper integer limits: \n");
	scanf("%d %d", &lv, &uv);

	while (lv < uv)
	{
		sum = 0;

		for (i = lv; i <= uv; i++)
			sum += (long)i * i;
		
		printf("The sums of the squares from %ld to %ld is %ld\n", (long)lv * lv, (long)uv * uv, sum);

		printf("Enter next set of limits: \n");
		scanf("%d %d", &lv, &uv);
	}

	printf("Done\n");

	return 0;
}