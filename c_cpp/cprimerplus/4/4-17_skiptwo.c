//  skiptwo.c -- skips over first two integers of input
//  - Listing 4.17, Chapter 4, C Primer Plus, 6th. Page 134.
//
//  Created by Yinghua Han on 6/13/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int n;
	char c, c1, c2;

	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);

	scanf("%c %c %c", &c1, &c2, &c);
	printf("The last char was %c, %c, %c\n", c1, c2, c);
	printf("%d\n", c1);	// 输出 c1 的 ASCII 码
	// 此处的c1读到的字符，为第一个scanf语句读取完最后一个整数之后跟着的那个字符，可能是空格也可能是换行。
	// 这是因为scanf读到不能读取的地方就会停止，而且会把读取错误的数据放回input那里，
	// 所以下次再scanf的时候又从上次读取错的地方开始继续读.

	return 0;

}