//  4-ex4_height.c - printing your height
//  - Solution to Programming Exercise 4, Chapter 4, C Primer Plus, 6th. Page 141
//
//  Created by Yinghua Han on 6/15/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	char name[20];
	float height;

	printf("May I have your name, please?\n");
	scanf("%s", name);

	printf("Hello, %s. May I ask, how tall are you in inches?\n", name);
	scanf("%f", &height);

	printf("%s, you are %.3f feet tall.\n", name, height/12);

	return 0;
}