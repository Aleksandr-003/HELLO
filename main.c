#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
int main(void)
{
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    //setlocale(LC_ALL,"");
    printf("Hello!\n");
    getch();
    return 0;
}