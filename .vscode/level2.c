#include <stdio.h>

int main()
{
    int n;
    printf("请输入一个在（1，9）之间的数字 ");
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= i;j++)
            printf("%d*%d=%d\t", i, j, i * j);
        printf("\n");
    }
    return 0;
}