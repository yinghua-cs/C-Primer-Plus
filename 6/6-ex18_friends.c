//
//  6-ex18_friends.c - calculate the number of friends.
//  - Solution to Programming Exercise 18, Chapter 6, C Primer Plus, 6th. Page 244
//
//  Created by Yinghua Han on 9/7/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	const int DUNBAR = 150;

	int friend, wk;

	friend = 5;
	wk = 0;

	do
	{
		wk++;
		friend = (friend - wk) * 2;
		printf("Week %d, Prof. Rabnud has %d friends.\n", wk, friend);
	} while (friend <= DUNBAR);

	return 0;
}