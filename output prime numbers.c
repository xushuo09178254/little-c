#include <stdio.h>
int main()
{
    for(int x =2;x<100;x++){
        int i;
        int isPrime = 1;

        for(i=2;i<x;i++){
            if(x%i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1){
            printf("%d\t",x);
        }
    }

    return 0;
}