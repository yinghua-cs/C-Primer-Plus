//
//  7-ex3_evenOdd.c - counts even and odd integers, calculate the averages for each.
//  - Solution to Programming Exercise 3, Chapter 7, C Primer Plus, 6th. Page 296
//
//  - Write a program that reads integers until 0 is entered. After input terminates, the 
//    program should report the total number of even integers (excluding the 0) entered, the 
//    average value of the even integers, the total number of odd integers entered, and the 
//    average value of the odd integers.
//
//  Created by Yinghua Han on 10/13/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	int ec = 0;		// even count
	int oc = 0;		// odd count
	int i;			// input integer
	int esum = 0;	// even sum
	int osum = 0;	// odd sum

	printf("Enter some integers (terminates by 0):\n");
	while (scanf("%d", &i) == 1 && i != 0)
	{
		if (i % 2 == 0)
		{
			ec++;
			esum += i;
		}
		else
		{
			oc++;
			osum += i;
		}
	}

	printf("%d even integers, average is %.2lf.\n"
		"And %d odd integers, average is %.2lf.\n", 
		ec, (double)esum/ec, oc, (double)osum/oc);

	return 0;
}