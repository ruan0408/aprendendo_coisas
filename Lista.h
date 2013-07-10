#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "Item.h"

typedef struct list* Lista;

Lista listaInit();
void listaInsere (Lista, Item);
Item listaRemove (Lista, Item);
int listaVazia(Lista);
void listaSelect (Lista, void (*visit)(Item));
void listaFree(Lista);

#endif /* LISTA_H_INCLUDED*/
