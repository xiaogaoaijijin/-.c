void student()
{
	int ch;
	printf("---欢迎同学---\n");
	printf("修改密码：1\n");
	printf("查询班级所有学生成绩：2\n");
	printf("查询班级指定学生成绩：3\n");
	printf("退出：0\n");
	scanf("%d", &ch);
		if (ch == 1)
		{
			xiuPw();
		}//修改密码
		else if (ch == 2)
		{
			total();
		}//查询所有学生成绩
		else if (ch == 3)
		{
			find_score();
		}//查询指定学生成绩
		else if (ch == 0)
		{
			exit(0);
		}//退出
}
 