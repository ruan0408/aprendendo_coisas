#include <stdio.h>
#include "Lista.h"

int main()
{
    int i;
    Lista num, num2;
    /*Lista num;*/
    num = listaInit();
    num2 = listaInit();
    /*printf("%p\n", num);*/
    for(i = 0; i<10; i++){
        listaInsere(num, i);
        listaInsere(num2, i*10);
    }
    listaSelect(num, itemShow);
    listaSelect(num2, itemShow);
    listaFree(num);
    listaFree(num2);

    return 0;
}
