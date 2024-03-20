#include <stdio.h>
int main()
{
    for(int i=0;i<9;i++)///0-8
    {
        printf("i是%d ",i);
    }
    printf("\n");
    for(int i=1;i<=9;i++)///1-9
    {
        printf("i是%d ",i);
    }
    printf("\n");
    for(int i=9-1;i>=0;i--)///倒過來
    {
        printf("i是%d ",i);
    }
}
