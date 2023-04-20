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
	printf("1~100의 합에서 최초로 1000이 넘는 위치는? : %d ", i);
}
		
		
