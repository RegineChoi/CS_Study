#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// #pragma comment(lib, "User32.lib") // Windows消息框支持
// 使用该指令可以替代在IDE项目属性中手动添加库文件的操作，使代码自包含。

int main()
{
    double km;
    MessageBoxW(NULL, L"开始单位换算训练", L"作战系统", MB_OK); // Windows弹窗
    printf("输入公里数: ");
    scanf("%lf", &km);
    double miles = km * 0.621371;

    printf("\n======= 作战简报 =======\n");
    printf("公里： %.2f\n", km);
    printf("英里： %.2f\n", miles);
    printf("========================\n");
    system("pause");
    return 0;
}