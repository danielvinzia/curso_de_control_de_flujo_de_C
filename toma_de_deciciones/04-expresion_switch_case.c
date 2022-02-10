#include <stdio.h>

int opt1 = 1;
int opt2 = 1;

int main()
{
    printf("bienvenido a kolo store: \n");
    printf("opcion 0 para bebidas\n");
    printf("opcion 1 para comidas\n");
    switch (opt1)
    {
        case 0:
            printf("usted eliegio la opcion 0, vera nuestro menu de bebidas elija una:\n");
            printf("opcion 0 para coca cola cero\n");
            printf("opcion 1 para coca cola comun\n");
            printf("opcion 2 para coca cola diet\n");
            if (opt2 == 0)
                printf("usted eligio una coca cola cero, mmm rico");
            else if (opt2 == 1)
                printf("usted eligio una coca cola comun, mmm azucar");
            else if (opt2 == 2)
                printf("usted eligio una coca cola diet, mmm estevia");
            else
                printf("opcion invalida");
            break;
        case 1:
            printf("usted eliegio la opcion 1, vera nuestro menu de comidas elija una:\n");
            printf("opcion 0 para hamburguesa\n");
            printf("opcion 1 para hotdog\n");
            printf("opcion 2 para pizza\n");
            if (opt2 == 0)
                printf("usted eligio una hamburguesa, mmm gordo");
            else if (opt2 == 1)
                printf("usted eligio un hotdog, mmm yanqui");
            else if (opt2 == 2)
                printf("usted eligio una pizza, mmm harinas");
            else
                printf("opcion invalida");
            break;
        case 2:
            printf("usted eliegio la opcion 2, vera nuestro menu de postres elija uno:\n");
            printf("opcion 0 para flan\n");
            printf("opcion 1 para budin de pan\n");
            printf("opcion 2 para helado\n");
            if (opt2 == 0)
                printf("usted eligio un flan, mmm con dulce de leche");
            else if (opt2 == 1)
                printf("usted eligio un budin de pan, mmm alta siesta");
            else if (opt2 == 2)
                printf("usted eligio un helado, mmm chocolate con nueces");
            else
                printf("opcion invalida");
            break;
        default:
            printf("opcion invalida");
            break;
    }
    return 0;
}