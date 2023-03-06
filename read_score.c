#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
int read_score(SCORE score[])
{
	int i;
	FILE* fp = fopen("score.txt", "a+");
	if (fp == NULL)
	{
		printf("文件打开失败\n");
		exit(0);
	}
	for (i = 0; !feof(fp); i++)
	{
		fscanf(fp, "%s\t %s\t %d\t %d\t %d\n",
			score[i].studentID, score[i].name, &score[i].chinese,
			&score[i].math, &score[i].english);
	}
	fclose(fp);
	return i;
}