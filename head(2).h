typedef struct user
{
	char ID[20];//账号
	char password[20];//密码
	char name[20];//名字
	int flag;//老师：0，学生：1
}USER;
typedef struct score
{
	char studentID[20];//学号
	char name[20];//名字
	int chinese;//科目成绩
	int math;
	int english;
	float aver;//平均分
	int total;//科目总成绩
}SCORE;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void zhuce();//注册
void menu();//菜单
void logic();//登录
void save_user(USER user[], int n);//存储用户信息
int read_user(USER user[]);//读用户信息
int xiuPw();//修改登录密码
void teacher();//教师页面
void student();//学生页面
int read_score(SCORE score[]);//读学生成绩信息
void save_score(SCORE score[], int n);//存储学生成绩信息
void increase();//老师向score.txt中添加学生成绩信息
void total();//查询所有学生成绩信息并排序
void find_score();//通过学号或姓名查询学生成绩信息和平均分，总分
int delete();//删除
void sort();//按学号排序     
int xiuscore();//修改学生成绩信息
void total1();//输出学生成绩信息
void user1();//输出用户信息
