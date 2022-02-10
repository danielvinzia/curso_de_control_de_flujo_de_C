#include <stdio.h>

int n = 10;

int main()
{
    while (n > 10)
    {
        printf("n es igua a %d\n", n);
        n = n - 1;
    }
    printf("el bucle se a concluido porque n es igual a : %d", n);
    return 0;
}
