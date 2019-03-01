//
//  ex5_country.c
//  - Solution to Programming Exercise 5, Chapter 2, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 2/4/19.
//  Copyright © 2019 Yinghua Han. All rights reserved.
//

# include <stdio.h>

void br()
{
	printf("Brazil, Russia");
}

void ic()
{
	printf("India, China");
}

int main(void)
{
	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	printf("\n");
}