// from https://www.cnblogs.com/qytan36/archive/2010/09/27/1836569.html
// the difference between type "char" and "unsigned char"

#include <stdio.h>

void func(unsigned char value)
{
	char c = value;	// some implementations set char == unsigned char
	unsigned char uc = value;
	unsigned int a = c, b = uc;
	int i = c, j = uc;

	printf("----------------------------\n");
	printf("\tchar\t\tunsigned char\n");
	printf("%%c:\t%c\t\t%c\n", c, uc);
	printf("%%x:\t%#x\t\t%#x\n", c, uc);
	printf("%%u:\t%u(%#x)\t\t%u\n", a, a, b);
	printf("%%d:\t%d\t\t%d\n", i, j);
	printf("\n");

}

int main(void)
{
	func(0x80);	// binary: 1000 0000
	// Output:
	// ----------------------------
	// 	char					unsigned char
	// %c:	?						?
	// %x:	0xffffff80				0x80
	// %u:	4294967168(0xffffff80)	128
	// %d:	-128					128
	// **********************************
	// 最高位是1，signed char赋值到int时会做最高位(符号位)扩展，
	// 出现意想不到的问题。


	func(0x7f);	// binary: 0111 1111
	// Output:
	// ----------------------------
	// 	char		unsigned char
	// %c:			
	// %x:	0x7f		0x7f
	// %u:	127(0x7f)	127
	// %d:	127			127
	// *****************************
	// 最高位是0，故即使signed char赋值到int时做最高位扩展也没出错。

	return 0;

}