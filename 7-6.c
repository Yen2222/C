#include <stdio.h>

void main()
{
	int a;
	do
	{
	printf("�մ� �ֹ��Ͻðڽ��ϱ� ? \n ");

	printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�׸���ų���� ==> ");
	scanf("%d", &a);

	switch(a)
	{
		case 1 : 
			printf("#ī��� �ֹ��ϼ̽��ϴ�.\n");
			printf("\n");
			break;
		case 2:
			printf("#īǪġ�� �ֹ��ϼ̽��ϴ�.\n");
			printf("\n");
			break;
		case 3:
			printf("#�Ƹ޸�ī�� �ֹ��ϼ̽��ϴ�.\n");
			printf("\n");
			break;
		case 4:
			printf("#�ֹ��Ͻ� Ŀ�� �غ��ϰڽ��ϴ�.\n");
			printf("\n");
			break;
		default :
			break;
	}
	} while (a<4);
}

