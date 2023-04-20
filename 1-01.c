#include <stdio.h>

void main()
{
	int i = 2;
	
	for(int j =1; j<10; j++){
		printf("%d X %d = %d \n", i,j, i*j);
		if(j==9){
			j=0;
			i++;
			printf("\n");
		}
		if(i==10)
			break;
	}
}

