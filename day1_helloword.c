#include <stdio.h>
#include <Windows.h>

int main()
{
    printf("Hello 突击队员！\n");
    SYSTEMTIME st;
    GetLocalTime(&st); // 获取当前系统时间

    printf("当前时间：%d-%02d-%02d %02d:%02d:%02d",
           st.wYear, st.wMonth, st.wDay, st.wHour, st.wMinute, st.wSecond);
    getchar();

    return 0;
}