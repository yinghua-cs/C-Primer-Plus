//
//  2-ex8_13.c - use functions
//  - Solution to Programming Exercise 3, Chapter 8, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 2/4/19.
//  Copyright © 2019 Yinghua Han. All rights reserved.
//

# include <stdio.h>

void two()
{
	printf("two\n");
}
void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
	return 0;
}