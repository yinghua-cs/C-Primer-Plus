//
//  3-ex7_hInCm.c - give out your height in inches and centimeters.
//  - Solution to Programming Exercise 7, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/16/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

float inchToCm(float);
float cmToInch(float);

int main(void)
{
	float h_inch, h_cm;

	// !! 复习 case 语句后改善这里，并考虑输入数据的exception
	printf("Please enter your height in inches:");
	scanf("%f", &h_inch);
	printf("You're %.2f in, it's %.2f cm.\n", h_inch, inchToCm(h_inch));

	printf("Please enter your height in centimeters:");
	scanf("%f", &h_cm);
	printf("You're %.2f cm, it's %.2f in.\n", h_cm, cmToInch(h_cm));

	return 0;
}

float inchToCm(float in)
{
	float cm;

	cm = in * 2.54;

	return cm;
}

float cmToInch(float cm)
{
	float in;

	in = cm / 2.54;

	return in;
}