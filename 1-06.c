#include <stdio.h> //goto 문//

void main()
{
	int a;
again:
	scanf("%d", &a);
	if(a <= 10)
		goto again;
	else
		printf("%d는 10보다 큽니다.", a);
}
