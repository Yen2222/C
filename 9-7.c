# include <stdio.h>

void main()
{
	char ch;
	char *p;
	p = &ch;

	ch = 'A';
	
	*p = 'Z';

	printf("ch�� ������ �ִ� ��: ch ==> %c \n", ch);
}

