//  do_while.c -- exit condition loop
//  - Listing 6.15, Chapter 6, C Primer Plus, 6th. Page 221.
//
//  Created by Yinghua Han on 7/23/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	const int secret_code = 13;
	int code_entered;

	do
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number: ");
		scanf("%d", &code_entered);
	} while (code_entered != secret_code);
	printf("Congratulations! You are cured!\n");

	return 0;
}