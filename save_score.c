#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
void save_score(SCORE score[],int n)
{
	FILE* fp = fopen("score.txt", "a+");
	int i;
	if (fp == NULL)
	{
		printf("文件创建失败\n");
		exit(0);
	}
	for (i = 0; i < n; i++)
	{
		fprintf(fp, "%s\t %s\t %d\t %d\t %d\n",
			score[i].studentID, score[i].name, score[i].chinese,
			score[i].math, score[i].english);
	}
	fclose(fp);
}

