#include <stdio.h>

void main()
{
	int aa[4];
	int hap = 0;

	for(int i = 0; i<4; i++){
		printf("%d��° ���ڸ� �Է��ϼ��� : ",i+1);
		scanf("%d",&aa[i]);
		hap += aa[i];
	}
	printf(" �հ� ==> %d ", hap);
}
	
