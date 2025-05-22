#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int combat_power = 65535; // 战斗力数值
    LPVOID addr = &combat_power;

    printf("变量地址：%p\n", addr);
    printf("内存占用：%d字节\n", sizeof(combat_power));

    // Windows API直接读取内存
    DWORD oldProtect;
    VirtualProtect(addr, sizeof(int), PAGE_READWRITE, &oldProtect);
    printf("内存原始值：%d\n", *(int *)addr);

    system("pause");
    return 0;
}