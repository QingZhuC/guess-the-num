#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void mnue()	//�˵�����
{
	printf("###########################\n");
	printf("####  1.play  0.exit   ####\n");
	printf("###########################\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;	//����1~100֮�����
	printf("������һ��1~100֮������֣��²¿��Ƕ��٣�\n");
	while (1)
	{
		printf("������>>");
		scanf("%d", &guess);
		if (guess < ret)
			printf("��С��\n");
		else if (guess > ret)
			printf("�´���\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL)); //ʱ����趨rand��ʼ��
		mnue();	//�˵�
		printf("������>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");	//����
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);	//0Ϊ��,��0Ϊ��
	return 0;
}