#include <stdio.h>

void main()
{
	char str[10] = "0123456789";

	printf("str ==> %s \n", str);

	str[0] = 'I';
	str[1] = 'T';
	str[2] = 'C';
	str[3] = 'O';
	str[4] = 'O';
	str[5] = 'K';
	str[6] = '\0';

	printf("str ==> %s \n", str);
	printf("str[7] ==> %c \n", str[7]);
	printf("str[50] ==> %c \n", str[50]);
	printf("str[11] ==> %c \n", str[11]);
	printf("str[12] ==> %c \n", str[12]);
	printf("str[13] ==> %d \n", str[13]);
	printf("str[14] ==> %d \n", str[14]);
}
