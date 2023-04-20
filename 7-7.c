#include <stdio.h>

void main()
{
	int i;

	for( i = 1 ; i<101 ; i++)
	{
		printf("for 문을 %d 회 실행했습니다. \n", i);
		break;
	}
	printf("for 문을 종료했습니다.\n");
}
