//  flags.c -- illustrates some formatting flags
//  - Listing 4.9, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 5/5/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	printf("%x %X %#x\n", 31, 31, 31);	// 1f 1F 0x1f
	printf("**%d**% d**% d**\n", 42, 42, -42);	// **42** 42**-42**
	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);	// **    6**  006**00006**  006**

	return 0;

}