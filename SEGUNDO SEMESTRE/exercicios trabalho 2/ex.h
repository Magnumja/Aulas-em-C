#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int fatorial(int n)
{
    int f = 1;
    int i = 1;
    system("cls");

    while (i <= n)
    {
        f *= i;
        i++;
    }
    return f;
}