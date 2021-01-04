/*
现在给你一个正整数N，要你快速的找出在1.....N这些数里面所有的素数。
*/

#include<stdio.h>
#include<sys/time.h>
#include<math.h>

int isPrime(int n){
    int N;
    N=n;
    for(int i=1;i<=(int)sqrt(N);i++)
    {
        if (N%i==0 && i!=1)
        {
            return 0;
            //break;
        }        
    }
    return 1;
}

int main(){
    struct timeval start,end;
    double timeuse;
    int a,t,n;
    n=1;
    printf("please input a num\n");
    scanf("%d",&a);

    gettimeofday(&start,NULL);
    while (n<=a)
    {
        t=isPrime(n);
        if (t==1) printf("%d ",n);
        n++;
    }
    gettimeofday(&end,NULL);
    timeuse = (end.tv_sec-start.tv_sec)*1000 + (end.tv_usec-start.tv_usec)/1000;
    printf("\n程序运行耗时%lf ms",timeuse);
    return 0;
}
