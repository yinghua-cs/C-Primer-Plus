//
//  3-ex6_watermolecules.c - give out the number of water molecules for the input amount (in quarts) of water
//  - Solution to Programming Exercise 6, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/15/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

float waterMolecules(float water_quarts)	// return the number of water molecules for the input amount (in quarts) of water
{
	float water_molecule;

	water_molecule = water_quarts * (950.0/(3E-23));

	return water_molecule;
}

int main(void)
{
	float water_quarts;

	printf("Please enter the amount of water (in quarts):");
	scanf("%f", &water_quarts);
	printf("There are %e molecule(s) in %.2f quart(s) of water.\n", waterMolecules(water_quarts), water_quarts);
	
	return 0;
}