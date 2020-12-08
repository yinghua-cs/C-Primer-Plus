//  4-ex5_downloadtime.c - calculate the download time
//  - Solution to Programming Exercise 5, Chapter 4, C Primer Plus, 6th. Page 141
//
//  Created by Yinghua Han on 6/15/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	float speed, filesize;

	printf("Please enter the download speed in megabits per second (Mbs):\n");
	scanf("%f", &speed);
	printf("and the file size in megabytes (MB):\n");
	scanf("%f", &filesize);

	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n", 
		speed, filesize, filesize/(speed/8));
	return 0;
}