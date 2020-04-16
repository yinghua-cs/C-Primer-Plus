//
//  2-ex6_toes.c - identify variables
//  - Solution to Programming Exercise 6, Chapter 2, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 2/4/19.
//  Copyright © 2019 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	int toes, twice_toes, square_toes;

	toes = 10;
	twice_toes = 2 * toes;
	square_toes = toes * toes;

	printf("toes is %d, twice toes is %d, toes squared is %d.\n", toes, twice_toes, square_toes);
	printf("toes is %d, twice toes is %d, toes squared is %d.\n", toes, 2 * toes, toes * toes);

}