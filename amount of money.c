#include <stdio.h>
int main()
{
   const int AMOUNT = 100;
   int price = 0;

   printf("输入金额(元):\n");
   scanf("%d",&price);

   int change = AMOUNT - price;

   printf("找%d元\n");
   
   return 0;
}