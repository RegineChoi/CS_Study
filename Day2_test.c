#include <windows.h>
#include <stdio.h>

int main()
{
    printf("MB_OKCANCEL = 0x%08X\n", MB_OKCANCEL);
    printf("MB_ICONERROR = 0x%08X\n", MB_ICONERROR);
    printf("Combined = 0x%08X\n", MB_OKCANCEL | MB_ICONERROR);
    return 0;
}
