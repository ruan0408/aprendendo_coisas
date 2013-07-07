#include <stdlib.h>
#include <stdio.h>
#include "Lista.h"

int main()
{
    Item novo, novo2;
    Lista num, num2;
    int i;
    num = listaInit();
    num2 = listaInit();

    for(i = 0; i<10; i++)
    {
        novo = itemAlloc();
        novo2 = itemAlloc();

        setItemN(novo, i);
        setItemN(novo2, i*10);
        listaInsere(num, novo);
        listaInsere(num2, novo2);
    }
    listaSelect(num, itemShow);
    listaSelect(num2, itemShow);
    listaFree(num);
    listaFree(num2);

    return 0;
}
