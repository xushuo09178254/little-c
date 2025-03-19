#include <stdio.h>

int is_prime(int n) {
    if(n <= 1) return 0;
    if(n == 2) return 1;//2是唯一的偶素数
    if(n%2 == 0) return 0;//排除其他偶数
    for(int i = 3;i < n;i += 2){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    printf("请输入一个数:\n");
    scanf("%d",&num);

    if(is_prime(num)){
        printf("%d是素数。\n",num);
    } else{
        printf("%d不是素数。\n",num);
    }

    return 0;
}