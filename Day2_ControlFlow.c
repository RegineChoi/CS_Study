#include <stdio.h>
#include <windows.h> //使用Windowsde的Beep函数
#include <stdlib.h>

int main()
{
    int stored_pw = 123456;
    int input_pw;
    int attempt = 0;

    while (attempt < 3)
    {
        printf("输入访问密码（剩余%d次机会）: ", 3 - attempt);
        scanf("%d", &input_pw);

        if (input_pw == stored_pw)
        {
            printf("\x1B[32m认证通过！\x1B[0m\n"); // ANSI颜色代码
            Beep(784, 300);                        // 成功提示音（G5音）
            break;
        }
        else
        {
            printf("\x1B[31m密码错误！\x1B[0m\n");
            Beep(262, 500); // 错误提示音（C4音）
            attempt++;
        }
    }

    if (attempt == 3)
    {
        MessageBoxW(NULL, L"系统已锁定", L"安全警报", MB_ICONERROR);
    }
    return 0;
}