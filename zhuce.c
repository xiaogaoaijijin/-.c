#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#define N 100
void zhuce()
{
	USER user[N];
	int i = 0, ch1, ch2;
	do
	{
		printf("请输入账号：\n");
		fflush(stdin);
		scanf("%s",&user[i].ID);
		printf("请输入密码：\n");
		scanf("%s", &user[i].password);
		printf("请输入名字：\n");
		scanf("%s", &user[i].name);
		printf("请选择用户类型：\n教师：0\n学生：1\n");
		scanf("%d", &user[i].flag);
		i++;//保存用户注册信息
		printf("确认注册：0\n取消注册：1\n");
		scanf("%d", &ch1);
		if (ch1 == 0)
		{
			save_user(user, i);
			printf("注册成功\n");
		}
		else
		{
			menu();
		}
		printf("是否继续注册\n继续：0\n返回：1\n");
		scanf("%d", &ch2);
	} while (ch2 ==0);
	menu();
}


