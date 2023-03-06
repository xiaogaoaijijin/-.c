#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#define N 100
void logic()
{
	char ID[20];//账号
	char password[20];//密码
	USER user[N];
	int i, n, count = 0, result = 0;
	n = read_user(user);
	do 
	{
		printf("请输入学号：\n");
		fflush(stdin);
		scanf("%s", &ID);//获得账号
		printf("请输入密码：\n");
		scanf("%s", &password);//获得密码
		count++;
		for (i = 0 ; i < n; i++)
		{
			if (strcmp(user[i].ID, ID) == 0 && strcmp(user[i].password, password) == 0 && count < 3)
			{
				printf("登陆成功\n");
				result = 1;
				if (user[i].flag == 0)
					teacher();
				else
					student();
				break;
			}
		}
		if (i >= n && count < 3)
		{
			printf("输入错误，还有%d次机会\n",3 - count);
		}
		else if (count >= 3)
		{
			printf("错误次数过多，没有机会了\n");
			exit(0);
		}
	} while (result == 0 && count < 3);
}


