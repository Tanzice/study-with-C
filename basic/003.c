/*
进制转换
输入一个十进制数N(32位整数)，将它转换成R（2<=R<=16, R<>10）进制数输出。

资料：
反码表示法规定：正数的反码与其原码相同；负数的反码是对正数逐位取反，符号位保持为1。
补码表示法规定：正数的补码与其原码相同；负数的补码是在其反码的末位加1。
原码、反码、补码详解
https://www.cnblogs.com/zhangziqiu/archive/2011/03/30/ComputerCode.html
*/

#include<stdio.h>

int main(){
    int N,R,i;
    int a[32];
    printf("please input a num & R(2<R<10)\n");
    scanf("%d %d",&N,&R);
    i = 0;
    int B=N;
    while (N/R!=0){
        a[i]=N%R;
        N=N/R;
        i++;
    }
    a[i]=N%R;       //最后一位
    printf("10进制转换为%d进制值为  %d --> %d",R,B);
    for (;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}