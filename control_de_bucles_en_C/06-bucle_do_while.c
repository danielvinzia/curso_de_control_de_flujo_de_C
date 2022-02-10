#include <stdio.h>

int n = 20;

int main()
{
    do
    {
        printf("n es igua a %d\n", n);
        n = n - 1;
    } while (n > 10);
    printf("el bucle se a concluido porque n es igual a : %d", n);
    return 0;
}
