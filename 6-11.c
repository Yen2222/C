#include <stdio.h>

void main()
{
	int a;

	printf("¸î ´Ü ? ");
	scanf("%d",&a);

	for ( int i = 1; i< 10 ; i++){
		printf("%d X %d = %d \n", a, i, a*i);
	}
}
