//
//  5-ex9_temperature.c - converts Fahrenheit temperature to Celsius, and Kelvin temperatures
//  - Solution to Programming Exercise 9, Chapter 5, C Primer Plus, 6th. Page 188
//
//  Created by Yinghua Han on 7/16/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
// 

# include <stdio.h>

void Temperatures(double);

int main(void)
{
	double t;
	int test;

	printf("Enter a Fahrenheit temperature:\n");
	test = scanf("%lf", &t);

	while (test == 1)
	{
		Temperatures(t);
		printf("Enter a Fahrenheit temperature (q to quit):\n");
		test = scanf("%lf", &t);
	}

	printf("See you ~\n");

	return 0;
}

void Temperatures(double f_t)
{
	const float CELSIUS_C1 = 5.0, CELSIUS_C2 = 9.0, CELSIUS_C3 = 32.0, KELVIN_C = 273.16;

	double c_t, k_t;

	c_t = CELSIUS_C1 / CELSIUS_C2 * (f_t - CELSIUS_C3);
	k_t = c_t + KELVIN_C;

	printf("%.2f F = %.2f C = %.2f K.\n", f_t, c_t, k_t);

}