#include <stdio.h>

void main()
{
	int a = 1;
	int hap = 0;

	while(a<11){
		hap+=a;
		a++;
	}
	printf("1에서 10까지의 합: %d ",hap);
}

