void teacher()
{
	int ch;
	printf("---欢迎老师---\n");
	printf("修改密码：1\n");
	printf("查询班级所有学生成绩：2\n");
	printf("查询班级指定学生成绩：3\n");
	printf("修改学生成绩：4\n");
	printf("删除学生成绩：5\n");
	printf("增加学生成绩信息：6\n");
	printf("退出：0\n");
	scanf("%d", &ch);
	if (ch == 1)
	{
		xiuPw();
	}//修改密码
	else if(ch == 2)
	{
		total();
	}//查看所有学生成绩
	else if(ch == 3)
	{
		find_score();
	}//查看指定学生成绩
	else if (ch == 4)
	{
		xiuscore();
	}//修改学生成绩
	else if (ch == 5)
	{
		delete();
	}//删除学生成绩
	else if (ch == 6)
	{
		increase();
	}//增加学生成绩
	else if (ch == 0)
	{
		exit(0);
	}//退出
}