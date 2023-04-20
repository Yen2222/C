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
	printf("1~100까지의 합(3의 배수 제외): %d " , hap);
}
		

