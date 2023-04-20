#include <stdio.h>

void main()
{
	int a;

	printf("1~4 중에 선택하세요 : ");
	scanf("%d", &a);

	switch (a)
	{
		case 1:
			printf("1을  선택했다 \n");
			break;
		case 2:
			printf("2을  선택했다 \n");
			break;
		case 3:
			printf("3을  선택했다 \n");
			break;
		case 4:
			printf("4을  선택했다 \n");
			break;
		default:
			printf("1~4 중 아무것도 아님. \n");
			break;
	}
}

