#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define FOREGROUND_WHITE (FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE)

void draw_colored_box(int width, int height, WORD color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);

    COORD pos = csbi.dwCursorPosition;
    for (int y = 0; y < height; y++)
    {
        SetConsoleCursorPosition(hConsole, (COORD){pos.X, pos.Y + y});
        SetConsoleTextAttribute(hConsole, color);
        for (int x = 0; x < width; x++)
        {
            printf("■");
        }
    }
    SetConsoleTextAttribute(hConsole, csbi.wAttributes);
}

int main()
{
    printf("图形绘制系统\n");
    draw_colored_box(10, 5, BACKGROUND_RED | FOREGROUND_WHITE);
    draw_colored_box(8, 3, BACKGROUND_BLUE | FOREGROUND_INTENSITY);
    draw_colored_box(8, 3, BACKGROUND_BLUE);
    draw_colored_box(8, 3, BACKGROUND_BLUE | FOREGROUND_INTENSITY);

    system("pause");
    return 0;
}