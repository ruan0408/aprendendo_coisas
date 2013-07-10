#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

typedef struct cel
{
    Item info;
    struct cel* prox;
}Celula;

typedef Celula* Link;

struct list
{
    Link head;
};

static Link NEW(Item item)
{
    Link nova = malloc(sizeof(*nova));
    nova->info = item;
    nova->prox = NULL;
    return nova;
}

static void FREE(Link t)
{
    itemFree(t->info);
    free(t);
}

Lista listaInit()
{
    Lista nova = malloc(sizeof *nova);
    nova->head = malloc(sizeof (*nova->head));
    nova->head->prox = NULL;
    return nova;
}

void listaInsere(Lista lista, Item item)
{
    Link nova;
    if(sizeof(*lista) != sizeof(struct list)) return;
    nova = NEW(item);
    nova->prox = lista->head->prox;
    lista->head->prox = nova;
}

int listaVazia(Lista lista)
{
    if(sizeof(*lista) != sizeof(struct list)) return -1;
    return lista->head->prox == NULL;
}

Item listaRemove(Lista lista, Item item)
{
    Link p, q;
    Item t;
    if(sizeof(*lista) != sizeof(struct list)) return NULLitem;
    for(p = lista->head, q = lista->head->prox; q != NULL; p = q, q = q->prox)
        if(q->info == item)
        {
            p->prox = q->prox;
            t = q->info;
            FREE(q);
            q = p;
            return t;
        }
    return NULLitem;
}

void listaSelect(Lista lista, void(*visit)(Item))
{
    Link p;
    if(sizeof(*lista) != sizeof(struct list)) return;
    for(p = lista->head->prox; p != NULL; p = p->prox)
        visit(p->info);
}

void listaFree(Lista lista)
{
    Link dead;
    if(sizeof(*lista) != sizeof(struct list)) return;
    while(!listaVazia(lista))
    {
        dead = lista->head->prox;
        lista->head->prox = dead->prox;
        FREE(dead);
    }
    free(lista->head);
    free(lista);
    lista = NULL;
}


