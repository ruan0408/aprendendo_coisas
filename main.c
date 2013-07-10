#include <stdlib.h>
#include <stdio.h>
#include "Lista.h"

int main()
{
    Item novo;
    Lista num;
    int i;
    num = listaInit();

    for(i = 0; i<10; i++)
    {
        novo = itemAlloc(i%3);
        setItemBase(novo, i);
        setItemAltura(novo, i*5.3);
        setItemRaio(novo, i);
        listaInsere(num, novo);
    }
    listaSelect(num, itemShow);
    listaFree(num);

    return 0;
}
