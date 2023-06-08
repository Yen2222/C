#include <stdio.h>

void main(int argc, char* argv[], char* arg[])
{
	char str[200];
	FILE *rfp;
	FILE *wfp;

	if (argc != 3)
	{
		printf("\n-- 매개변수를 2개 사용하세요 --\n");
		return;
	}

	rfp = fopen("argv[1]", "r");
	wfp = fopen("c:\\c_study\\arg[1]", "w");

	for( ;; )
	{
		fgets (str, 200, rfp);

		if (feof(rfp))
			break;

		fputs(str, wfp);
	}

	fclose(rfp);
	fclose(wfp);
}
