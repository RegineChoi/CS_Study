#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    int sqrt_n = (int)sqrt(n);
    for (int i = 3; i <= sqrt_n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    printf("质数检测雷达启动\n");
    for (int num = 100; num <= 200; num++)
    {
        if (is_prime(num))
        {
            printf("\033[33m%d\033[0m ", num);
        }
    }
    printf("\n扫描完成！\n");

    // system("pause");

    return 0;
}