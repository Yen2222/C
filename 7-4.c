#include <stdio.h>

void main()
{
	int a,b;
	char c;
	
	while(1){
		printf("����� �� ���� �Է� (���߷��� Ctrl+C) : ");
		scanf("%d %d", &a, &b);
		printf("����� �����ڸ� �Է��ϼ��� : ");
		scanf(" %c", &c);
		
		switch (c)
		{
			case '+' : 
				printf("%d + %d = %d",a,b,a+b);
				break;
			case '-' :
			       	printf("%d - %d = %d",a,b,a-b);
			        break;
			case '*' :
			       	printf("%d * %d = %d",a,b,a*b);
				break;
			case '/' : 
				printf("%d / %d = %d",a,b,a/b);
				break;
			case '%' : 
				printf("%d % %d = %d",a,b,a%b);
				break;
			default : 
				printf("�߸��� �����ڸ� �Է��ϼ̽��ϴ�.\n");
				break;
		}
	}
}

