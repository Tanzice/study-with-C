/*
兰州烧饼
烧饼有两面，要做好一个兰州烧饼，要两面都弄热。当然，一次只能弄一个的话，效率就太低了。
有这么一个大平底锅，一次可以同时放入k个兰州烧饼，一分钟能做好一面。而现在有n个兰州烧饼，至少需要多少分钟才能全部做好呢？
*/

#include<stdio.h>

int main()
{
    int n,k,totalTimes,m;
    printf("please input pancakeNum & pan size \n");
    scanf("%d %d",&n,&k);
    if (n<=k){
        printf("预计用时2分钟");
    }
    else{
        totalTimes = 2 * n / k;
        if ((2*n)%k != 0){
            printf("预计用时%d分钟",totalTimes++);
        }
        else{
            printf("预计用时%d分钟",totalTimes);
        }
    }
    return 0;
}