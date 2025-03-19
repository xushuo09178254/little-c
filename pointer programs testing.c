#include <stdio.h>
int main()
{
   /* int i = 0;
    int p;
    printf("%p\n",&i);
    printf("%p\n",&p);
   */
  /*int i;
  printf("%lu\n",sizeof(int));
  printf("%lu\n",sizeof(&i));
  */
 int a[10];
 printf("%p\n",&a);
 printf("%p\n",a);
 printf("%p\n",&a[0]);
 printf("%p\n",&a[1]);
}