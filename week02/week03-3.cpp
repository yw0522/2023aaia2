#include <stdio.h>
int main()
{

    int a=10;
    printf("%5d 佔5格\n",a);
    float pi=3.141592653589793238462643383279;
    printf("%f 浮點數只有8格\n");
    printf("%12f 如果指印12格，結果是對齊右邊\n",pi);
    printf("%12.10f 印12格，小數點右邊有10格，但不準確\n",pi);
    double pi2=3.141592653589793238462643383279;
    printf("%12.10f 兩倍浮點數，最後一位是後面的數四捨五入",pi2);
}
