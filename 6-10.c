#include <stdio.h>

void main()
{
	int a,b,c;
	int i;
	int hap=0;

	printf( "���۰�, ����, ������ �Է� : ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	for(i=a; i<=b; i+=c){
		hap = hap + i;
	}

	printf(" %d���� %d���� %d�� ������ ���� ��: %d",a,b,c,hap);
}	
