//  showf_pt.c -- displays float value in two ways
//  - Listing 3.7, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 1/15/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	float aboat = 0x1.F4P+14;	// 32000.0, 16进制的小数表示;
	double abet = 2.14E9;		// 16进制的0~f, 表示指数的e、p 大小写均可
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", aboat, aboat);
	// next line requires C99 or later compliance
	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
	
	printf("%f can be writen %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);

	return 0;

}