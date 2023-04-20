#include <stdio.h>

void main()
{
	int a, b, cha;

	scanf("%d %d",&a, &b);

	if(a>b)
		cha = a-b ;
	
	else 
		cha = b-a ;
	
	printf("%d", cha);
}
