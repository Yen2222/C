#include <stdio.h>

void main()
{
	int a;
	char x;
	
	scanf("%d", &a);

	if(a>=90)
		x = 'A';
	else if (a>=80)
		x = 'B';
	else if (a>= 70)
		x = 'C';
	else 
		x = 'F';

	printf("%c 학점 입니다.",x);
}

