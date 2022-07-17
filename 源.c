#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void mnue()	//菜单界面
{
	printf("###########################\n");
	printf("####  1.play  0.exit   ####\n");
	printf("###########################\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;	//生成1~100之间的数
	printf("生成了一个1~100之间的数字，猜猜看是多少？\n");
	while (1)
	{
		printf("请输入>>");
		scanf("%d", &guess);
		if (guess < ret)
			printf("猜小了\n");
		else if (guess > ret)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对啦\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL)); //时间戳设定rand起始点
		mnue();	//菜单
		printf("请输入>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");	//清屏
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误！\n");
			break;
		}
	} while (input);	//0为假,非0为真
	return 0;
}