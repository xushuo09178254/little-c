#include <stdio.h>
int isPrime (int x);
int main(void)
{
    int x;
    scanf("%d",&x);

    if(isPrime(x)){
        printf("%d是素数\n",x);
    } else{
        printf("%d不是素数\n",x);
    }

    return 0;
}

int isPrime(int x)
{
    int ret = 1;
    int i = 1;
    if(x == 1) ret =0;
    for(i=2;i<x;i++){
        if(x%i == 0){
            ret = 0;
            break;
        }
    }
    return ret;
}