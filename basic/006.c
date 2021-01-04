/*
明被一个问题给难住了，现在需要你帮帮忙。问题是：给出两个正整数，求出它们的最大公约数和最小公倍数。
*/

#include<stdio.h>
int mm(int a,int b)
    {
        int A,B,R;
        A=a;
        B=b;
        R=A%B;
        while(R!=0)
        {
            A=B;
            B=R;
            R=A%B;
        }
        return B;
    }

int main()
{
    int m,n,t;
    printf("please input two integer number\n");
    scanf("%d %d",&m,&n);
    if (m<m)
    {
        t=m;
        m=n;
        n=t;
    }
    int k = mm(m,n);
    printf("最大公因数为%d\n最小公倍数为%d",k,m*n/k);
    return 0;
}
