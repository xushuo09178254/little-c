#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    int i;
    int isPrime = 1;

    for(i=2;i<x;i++){
        if(x%i==0){
            isPrime = 0;
            break;
        }
    }//x=2时,不能进入循环;所以isPrime=1;

    if(isPrime==1){
        printf("是素数。\n");
    } else{
        printf("不是素数。\n");
    }
}