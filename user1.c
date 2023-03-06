#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#define N 100
void user1()
{
	int n;
	USER user[N];
	n = read_user(user);
	FILE* fp = fopen("user.txt", "r");
	int i = 0;
	getchar();
	if (fp == NULL)
	{
		printf("打开文件失败\n");
		exit(0);
	}
	for (i = 0; !feof(fp); i++)
	{
		fscanf(fp, "%s  %s  %s  %d", user[i].ID, user[i].password, user[i].name, &user[i].flag);
	}
	for (i = 0; i < n; i++)
	{
		printf("%s  %s  %s  %d\n", user[i].ID, user[i].password, user[i].name, user[i].flag);
	}
	fclose(fp);
}