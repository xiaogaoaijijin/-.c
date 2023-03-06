#define _CRT_SECURE_NO_WARNINGS
#include"head.h"
#define N 100
void sort()//按成绩排序
{
    int n;
    SCORE score[N];
    n = read_score(score);
    int i, j, s, k;
    char temp[20];
    int ftemp, ftemp1, ftemp2;
    for (i = 0; i < n - 1; i++)
    {
        for (j = n - 1; j > i; j--)
            if (score[j - 1].chinese > score[j].chinese)
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
    printf("---------按语文成绩升序排序---------\n");
    for (i = 0; i < n; i++)
    {
        printf("学号：%s  姓名：%s  语文：%d  数学：%d  英语：%d\n",
            score[i].studentID, score[i].name, score[i].chinese,
            score[i].math, score[i].english);
    }
}




