#include <stdio.h>
void main()
{	int f1 = 0;	int f2 = 1;	int f3 = f1 + f2;	int f4 = f3 + f2;	int f5 = f4 + f3;	int f6 = f5 + f4;
// Printing first 6 numbers here. However First 6 Fibonacci numbers are 1-digit numbers. That's why this answer also outputs first 6 digits.
printf("%d ", f1);	printf("%d ", f2);	printf("%d ", f3);	printf("%d ", f4); printf("%d ", f5);	printf("%d ", f6);
}
