#include <stdio.h>

void main()
{
	int a = 5;

	printf("상수의 AND 연산 : %d \n", (a>3) && (a<=5));
	printf("상수의 OR 연산 : %d \n", (a>3) || (a<=5));
	printf("상수의 NOT 연산 : %d \n", !(a==5));
}
