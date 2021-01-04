/*
韩信点兵
相传韩信才智过人，从不直接清点自己军队的人数，只要让士兵先后以三人一排、五人一排、七人一排地变换队形，而他每次只掠一眼队伍的排尾就知道总人数了。
输入3个非负整数a,b,c ，表示每种队形排尾的人数（a<3,b<5,c<7），输出总人数的最小值（或报告无解）。已知总人数不小于10，不超过100 。
*/

#include<stdio.h>

int main()
{
    int a,b,c,x,flag;
    flag = 0;
    printf("please input three num(a<3,b<5,c<7)\n");
    scanf("%d %d %d", &a,&b,&c);
    //printf("%d %d %d",a,b,c);
    for (x=10;x>=10 && x<=100;x++)
    {
        if(x%3==a && x%5==b && x%7==c)
        {
            printf("军队人数可能为：%d \n",x);
            flag = 1;
        }        
    }
    if (flag == 0)
        {
            printf("参数在10~100范围内无解");
        }
    return 0;
}