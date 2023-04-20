#include <stdio.h>

void main()
{
	int i,k;

	for (k = 1; k<10; k++){
		for (i=2; i<10; i++){
			printf("%d X %d = %d \t", i, k, i*k);
		}
		printf("\n");
	}
}
