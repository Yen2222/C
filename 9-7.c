# include <stdio.h>

void main()
{
	char ch;
	char *p;
	p = &ch;

	ch = 'A';
	
	*p = 'Z';

	printf("ch가 가지고 있는 값: ch ==> %c \n", ch);
}

