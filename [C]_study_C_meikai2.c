/*
 第2章のまとめ
 */
#include <stdio.h>
int main(void)
{
    int a;
    int b;
     double r;

     printf("整数aとbの値をスペース区切りで入力して下さい :");
     scanf("%d%d", &a, &b);

     printf("a + b = %d\n", a + b);
     printf("a - b = %d\n", a - b);
     printf("a * b = %d\n", a * b);
     printf("a / b = %d\n", a / b);
     printf("a %% b = %d\n", a % b);

     printf("(a+b)/2 の int型= %d\n", (a + b) / 2);
     printf("(a+b)/2 の double型= %f\n\n", (double)(a + b) / 2);

     printf("半径: ");
     scanf("%lf", &r);

     printf("半径%.3fの円の面積は%.3fです． \n", r, 3.14 * r * r);
     return 0;
}
