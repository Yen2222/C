#include <stdio.h>

void main()
{
	int a,b;


	for(   ;   ;   ){
		printf("���� �� �� �Է� (���߷��� Ctrl+C) :");
		scanf("%d", &a);
		scanf("%d", &b);
		printf("%d + %d = %d \n", a, b, a+b);
	}
}
