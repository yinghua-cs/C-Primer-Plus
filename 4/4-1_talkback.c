//  talkback.c -- nosy, informative program
//  - Listing 4.1, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/17/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>
# include <string.h>	// for strlen() prototype

# define DENSITY 62.4	// human density in lbs per cu ft

int main()
{
	float weight, volume;
	int size, letters;
	char name[40];		// name is an array of 40 chars

	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof name;		// sizeof 用于数据类型时：sizeof(type); 用于变量：sizeof(var_name) 或 sizeof var_name
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", 
		name, volume);
	printf("Also, your first name has %d letters,\n",
		letters);
	printf("and we have %d bytes to store it.\n", size);

	return 0;

}