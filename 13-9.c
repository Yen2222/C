#include <stdio.h>
#include <string.h>
#include <malloc.h>

void main()
{
	struct student {
		char name[10];
		int age;
	};

	int count;

	printf("�Է��� �л� �� : ");
	scanf("%d", &count);

	struct student s;
	struct student *p;

	p = (struct student*) malloc(sizeof(struct student) * count);

	for (int i=0; i<count; i++)
	{
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d", (p + i)->name, &(p + i)->age);
	}	

	printf("\n-- �л� ��� --\n");
	for (int i=0; i<count; i++) 
	{
		printf("�̸�:%s , ����:%d \n", (p + i)->name, (p + i)->age);
	}
}
