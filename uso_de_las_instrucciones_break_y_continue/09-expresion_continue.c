#include <stdio.h>

int main()
{
    int n = 30;
    int j = 0;
    for (int i = 0; i < n; i++){
        j = i;
        continue; //se va al siguiente bucle y no muestra nada
    }
    printf("el valor actual de j es: %d \n", j);
    return 0;
}
