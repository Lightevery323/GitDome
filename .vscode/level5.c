#include <stdio.h>

void findMax_min(int arr[], int len, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i = 1;i < len;i++)
    {
        if(arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main(void)
{
    int price[10];
    int len = 0;
    while (scanf("%d", &price[len]) == 1)
    {
        len++;
        if (len >= 10)
            break;
    }
    int max_val, min_val;
    findMax_min(price, len, &max_val, &min_val);
    printf("%d %d", min_val, max_val);
    return 0;
}