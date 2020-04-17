//
//  3-ex8_volumeConversion.c - converts cups into pints, ounces, tablespoons, and teaspoons.
//  - Solution to Programming Exercise 8, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/16/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

float cupToPt(float);
float cupToOz(float);
float ozToTbsp(float);
float tbspToTsp(float);

int main(void)
{
	float cp;

	printf("Please enter the volume in cups:");
	scanf("%f", &cp);
	printf("%.2f cup(s) is %.2f pint(s), %.2f ounce(s), %.2f tablespoon(s), %.2f teaspoon(s).\n", cp, cupToPt(cp), cupToOz(cp), ozToTbsp(cupToOz(cp)), tbspToTsp(ozToTbsp(cupToOz(cp))));

	return 0;

}

float cupToPt(float cp)
{
	float pt;

	pt = cp / 2.0;

	return pt;
}

float cupToOz(float cp)
{
	float oz;

	oz = cp * 8.0;

	return oz;
}

float ozToTbsp(float oz)
{
	float tbsp;

	tbsp = oz * 2.0;

	return tbsp;
}

float tbspToTsp(float tbsp)
{
	float tbs;

	tbs = tbsp * 3.0;

	return tbs;
}