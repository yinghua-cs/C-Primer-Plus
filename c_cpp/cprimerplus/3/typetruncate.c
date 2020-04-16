//	Type converting 
// 
//  Created by Yinghua Han on 4/6/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int cost = 12.99;
	float pi = 3.1415926536;

	printf("cost = %d\n", cost);	// cost = 12, no rounding 直接扔掉小数部分
	printf("pi = %f\n", pi);		// pi = 3.141593, rounding 但不是四舍五入
									// pi = 3.141592, if pi = 3.1415923536;

	return 0;
}
