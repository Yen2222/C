#include <stdio.h>

void main()
{
	int a;
	int b;
	char c;
	int result;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d", &a, &c, &b);

	switch (c){
		case '+' : result = a + b;
		       	printf("%d + %d = %d \n", a, b, result); break;
	        case '-' : result = a - b; 
			printf("%d - %d = %d \n", a, b, result); break;
		case '*' : result = a * b;
		        printf("%d * %d = %d \n", a, b, result); break;
		case '/' : result = a / b; 
			printf("%d / %d = %d \n", a, b, result); break;
		case '%' : result = a % b; 
			printf("%d % %d = %d \n", a, b, result); break;
	   	default : printf("�����ڸ� �߸� �Է��߽��ϴ�.");
	}
}


