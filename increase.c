#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#define N 100
void increase()
{
	SCORE score[N];
	int i = 0, ch1,ch2;
	printf("添加前为：\n");
	total1();
	do {
		printf("请输入学号：\n");
		fflush(stdin);
		scanf("%s", &score[i].studentID);
		printf("请输入姓名：\n");
		scanf("%s", &score[i].name);
		printf("请输入语文成绩：\n");
		scanf("%d", &score[i].chinese);
		printf("请输入数学成绩：\n");
		scanf("%d", &score[i].math);
		printf("请输入英语成绩：\n");
		scanf("%d", &score[i].english);
		i++;
		printf("确认输入：0\n取消输入：1\n");
		scanf("%d", &ch1);
		if (ch1 == 0)
		{
			save_score(score, i);
			printf("输入成功\n");
		}
		printf("添加后为：\n");
		total1();
		printf("是否继续输入：\n继续：0\n返回：1\n");
		scanf("%d",&ch2);
	} while (ch2 == 0);
}

