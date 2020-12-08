//  convert.c -- automatic type conversions
//  - Listing 5.14, Chapter 5, C Primer Plus, 6th. Page 175.
//
//  Created by Yinghua Han on 6/23/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	char ch;
	int i;
	float fl;

	fl = i = ch ='C';
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
	ch = ch + 1;
	i = fl + 2 * ch;
	fl = 2.0 * ch + i;
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
	ch = 1107;
	printf("Now ch = %c\n", ch);
	ch = 80.89;
	printf("Now ch = %c\n", ch);

	return 0;

}