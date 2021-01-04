/*
第几天？
给定一个日期(YYYY/MM/DD)，输出这个日期是该年的第几天。

资料：四年一闰，百年不闰，四百年再闰。
*/

#include<stdio.h>

int main(){
    int year,month,day,days;
    printf("please input year,month,day\n");
    scanf("%d %d %d",&year,&month,&day);
    int themonth = month;
    month -=1;
    for(days=day;month>0;month--)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days +=31;
            break;
        case 2:
            days +=28;
            break;
        default:
            days +=30;
            break;
        }
    }
    if ((year%4==0 && year%100!=0) || year%400 ==0) days++;
    printf("%d-%d-%d是该年的第%d天",year,themonth,day,days);
    return 0;
}