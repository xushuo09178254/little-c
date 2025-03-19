#include <stdio.h>
int main()
{
    int a,b;
    int min;

    scanf("%d %d",&a,&b);

    if(a<b){
        min = a;
    } else{
        min = b;
    }
    int ret = 0;
    for(int i = 1;i<=min;i++){
        if(a%i==0&&b%i==0){
            ret = i;
        }
    }
    printf("最大公约数为%d\n",ret);

    return 0;
}