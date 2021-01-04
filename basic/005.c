/*
计算球体积
根据输入的半径值，计算球的体积。计算结果保留三位小数。
%lf %f
*/

#include<stdio.h>
#define PI 3.14159265

int main()
{
    double r,V;
    printf("please input r\n");
    scanf("%lf",&r);
    V = 4.0*PI*r*r*r/3.0;
    printf("V=%.3lf",V);
    return 0;
}
