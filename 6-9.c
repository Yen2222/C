#include <stdio.h>

void main()
{
	int i;
	int hap = 0;
	int a;

	printf("값 입력 : ");
	scanf("%d",&a);

	for(i=1; i<=a; i++){
		hap = hap +i;
	}
	printf(" 1에서 %d까지의 합: %d",a, hap);
}
