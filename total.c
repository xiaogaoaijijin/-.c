#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#define N 100
void total()
{
	int n;
	SCORE score[N];
	n = read_score(score);
	FILE* fp = fopen("score.txt", "r");
	int i=0;
	getchar();
	if (fp == NULL)
	{
		printf("打开文件失败\n");
		exit(0);
	}
	for (i = 0; !feof(fp); i++)
	{
		fscanf(fp, "%s  %s  %d  %d  %d",
			score[i].studentID, score[i].name, &score[i].chinese,
			&score[i].math, &score[i].english);
	}
	for (i = 0; i <n; i++)
	{
		printf("学号：%s  姓名：%s  语文：%d  数学：%d  英语：%d\n",
			score[i].studentID, score[i].name, score[i].chinese,
			score[i].math, score[i].english);
	}
	sort();
	fclose(fp);
	int ch;
	printf("返回菜单：0\n退出：1\n");
	scanf("%d", &ch);
	if (ch == 0)
	{
		teacher();
	}
	else if (ch == 1)
	{
		exit(0);
	}
}


