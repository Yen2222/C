#include <stdio.h>

void main()
{
	int aa[3] = {10, 20, 30};

	for(int i=0; i<3; i++)
	{
		printf("&aa[%d]�� %d, aa+%d�� %d \n", i, &aa[i], i, aa+i);
	}
}
// & aa[0] = aa���� aa+0�̴�.
