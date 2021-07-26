#include <stdio.h>
#include <limits.h>

// calculate the integer ranges of char, short, int and long

void main()
{
	printf("from bitwise calculation ->\n");
	printf("min char -> %d\n", -(char)((unsigned char) ~0 >> 1) - 1);
	printf("min short -> %d\n", -(short)((unsigned short) ~0 >> 1) - 1);
	printf("min int -> %d\n", -(int)((unsigned int) ~0 >> 1) - 1);
	printf("min long -> %ld\n", -(long)((unsigned long) ~0 >> 1) - 1);
	printf("max char -> %d\n", (char)((unsigned char) ~0 >> 1));
	printf("max short -> %d\n", (short)((unsigned short) ~0 >> 1));
	printf("max int -> %d\n", (int)((unsigned int) ~0 >> 1));
	printf("max long -> %ld\n", (long)((unsigned long) ~0 >> 1));

	printf("from headers SIGNED -> \n");
	printf("min char -> %d\n", SCHAR_MIN);
	printf("min short -> %d\n", SHRT_MIN);
	printf("min int -> %d\n", INT_MIN);
	printf("min long - %ld\n", LONG_MIN);
	printf("max char -> %d\n", SCHAR_MAX);
	printf("max short -> %d\n", SHRT_MAX);
	printf("max int -> %d\n", INT_MAX);
	printf("max long -> %ld\n", LONG_MAX);

	printf("from headers SIGNED -> \n");
	printf("char -> %d\n", UCHAR_MAX);
	printf("short -> %d\n", USHRT_MAX);
	printf("int -> %d\n", UINT_MAX);
	printf("long -> %ld\n", ULONG_MAX);


}
