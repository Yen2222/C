#include <stdio.h>

void main()
{
	int i;
	int hap =0;

	for(i=1; i<101;i++){
		
		if(i%3 == 0)
			continue;
			
		hap += i;
		
	}
	printf("1~100������ ��(3�� ��� ����): %d " , hap);
}
		

