#include <stdio.h>

void main()
{
	int a=0;
	int i;

	for( i =1; i<101; i++){
		a+=i;

		if(a>1000)
			break;
	}
	printf("1~100�� �տ��� ���ʷ� 1000�� �Ѵ� ��ġ��? : %d ", i);
}
		
		
