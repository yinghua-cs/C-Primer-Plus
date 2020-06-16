//  pizza.c -- uses defined constants in a pizza context
//  - Listing 4.4, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/24/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

# define 	PI 	3.14159

int main(void)
{
	float area, circum, radius;

	printf("What is the radius of your pizza?\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("Your basic pizza parameters are as follows:\n");
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);

	// printf("%1.2f\n%2.2f\n%3.2f\n%4.2f\n%5.2f\n%6.2f\n%7.2f\n%8.2f\n", 
	// 	 area, area, area, area, area, area, area, area);
	// %5.2f
	// The number before the decimal point (5) means how wide for the floating point number.
	// 小数点前面的数（5）表示整个小数至少要留多少位宽，连小数点也计算在内。

	return 0;

}