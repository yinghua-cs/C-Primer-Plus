//  hibye.c -- how many hi and bye are printed?
//  - Review question 7, Chapter 6, C Primer Plus, 6th. Page 237.

# include <stdio.h>

int main(void)
{
	int i = 0;

	while (++i < 4)
		printf("Hi! ");
	do
		printf("Bye! ");
	while (i++ < 8);
	return 0;
}