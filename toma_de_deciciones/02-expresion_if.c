#include <stdio.h>
int n = 14;

int main()
{
    if (n > 10 && n < 20)
        printf("el numero es mayor que diez, pero menor que 20");
    else if (n == 10)
    {
        printf("el numero es diez");
    }
    else if (n > 20)
    {
        printf("el numero es mayor que veinte");
    }
    else if (n < 10 &&  n >= 0)
    {
        printf("el numero esta entre 0 y 9");
    }
    else
    {
        printf("error no se aceptan numero negativos");
    }
    
    return 0;
}
