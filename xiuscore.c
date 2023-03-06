#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#define N 100
int xiuscore()
{
	int n;
	SCORE score[N];
	n = read_score(score);
	char studentID[20];
	char studentID1[20];
	char name1[20];
	int chinese1, math1, english1;
	int  i, j, q = n;
	FILE* fp;
	char temp[20], temp1[20];
	int ftemp, ftemp1, ftemp2;
	fp = fopen("score1.txt", "wb+");
	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
			if (strcmp(score[j - 1].studentID, score[j].studentID) > 0)
			{
				strcpy(temp, score[j - 1].studentID);
				strcpy(score[j - 1].studentID, score[j].studentID);
				strcpy(score[j].studentID, temp);
				strcpy(temp, score[j - 1].name);
				strcpy(score[j - 1].name, score[j].name);
				strcpy(score[j].name, temp);
				ftemp = score[j - 1].chinese;
				score[j - 1].chinese = score[j].chinese;
				score[j].chinese = ftemp;
				ftemp1 = score[j - 1].math;
				score[j - 1].math = score[j].math;
				score[j].math = ftemp1;
				ftemp2 = score[j - 1].english;
				score[j - 1].english = score[j].english;
				score[j].english = ftemp2;
			}
	}
	printf("修改前为：\n");
	total1();
	printf("请输入要修改的学号：");
	scanf("%s", &studentID);
	for (i = 0; i < n; i++)
	{
		if (strcmp(score[i].studentID, studentID) == 0)
		{
			printf("请输入新的学号：");
			scanf("%s", &studentID1);
			printf("请输入新的新的姓名：");
			scanf("%s", &name1);
			printf("请输入新的语文成绩：");
			scanf("%d", &chinese1);
			printf("请输入新的数学成绩：");
			scanf("%d", &math1);
			printf("请输入新的英语成绩：");
			scanf("%d", &english1);
			strcpy(score[i].studentID, studentID1);
			strcpy(score[i].name, name1);
			score[i].chinese = chinese1;
			score[i].math = math1;
			score[i].english = english1;
		}
	    
	}
	printf("修改后为：\n");
	for (i = 0; i < n; i++)
	{
		printf("学号：%s  姓名：%s  语文：%d  数学：%d  英语：%d\n",
			score[i].studentID, score[i].name, score[i].chinese,
			score[i].math, score[i].english);
	}
	for (i = 0; i < n; i++)
	{
		fprintf(fp, "%s\t %s\t %d\t %d\t %d\n",
			score[i].studentID, score[i].name, score[i].chinese,
			score[i].math, score[i].english);
	}
	n = q;
	fclose(fp);
	FILE* ft;
	ft = fopen("score.txt", "rb+");
	for (i = 0; i < n; i++)
	{
		fscanf(ft, "%s\t %s\t %d\t %d\t %d\n",
			score[i].studentID, score[i].name, &score[i].chinese,
			&score[i].math, &score[i].english);
	}
	fclose(ft);
	remove("score.txt");
	rename("score1.txt", "score.txt");
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
	return 0;
}


