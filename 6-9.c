#include <stdio.h>

void main()
{
	int i;
	int hap = 0;
	int a;

	printf("�� �Է� : ");
	scanf("%d",&a);

	for(i=1; i<=a; i++){
		hap = hap +i;
	}
	printf(" 1���� %d������ ��: %d",a, hap);
}
