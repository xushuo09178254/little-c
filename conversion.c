#include <stdio.h>
int main()
{
    printf("请输入身高的英尺和英寸:\n");

    double foot;
    double inch;

    scanf("%lf %lf",&foot,&inch);
    printf("身高为%f2米\n",(foot+inch/12.0)*0.3048);
    
    return 0;
}