#include <stdlib.h>
#include <stdio.h>
#include "Item.h"

struct item
{
    int id;
    void* figura;
};

void setItemBase(Item item, float b)
{
    if(item->id == CIRC)return;
    else if(item->id == RET)
    {
        Retangulo* ret = (Retangulo*)item->figura;
        ret->b = b;
    }
    else
    {
        Triangulo* tri = (Triangulo*)item->figura;
        tri->b = b;
    }
}
void setItemAltura(Item item, float h)
{
    if(item->id == CIRC) return;
    else if(item->id == RET)
    {
        Retangulo* ret = (Retangulo*)item->figura;
        ret->h = h;
    }
    else
    {
        Triangulo* tri = (Triangulo*)item->figura;
        tri->h = h;
    }
}
void setItemRaio(Item item, float raio)
{
    if(item->id == CIRC)
    {
        Circulo* circ = (Circulo*)item->figura;
        circ->r = raio;
    }
    else return;
}

Item itemAlloc(int id)
{
    Item novo = malloc(sizeof *novo);
    if(id == RET)
    {
        Retangulo* ret = (Retangulo*) malloc(sizeof(Retangulo));
        ret->b = -1;
        ret->h = -1;
        novo->figura = ret;
    }
    else if(id == TRI)
    {
        Triangulo* tri = (Triangulo*) malloc(sizeof(Triangulo));
        tri->b = -1;
        tri->h = -1;
        novo->figura = tri;
    }
    else
    {
        Circulo* circ = (Circulo*) malloc(sizeof(Circulo));
        circ->r = -1;
        novo->figura = circ;
    }
    novo->id = id;

    return novo;
}

void itemShow(Item item)
{
    if(item->id == CIRC)
    {
        Circulo* circ = item->figura;
        printf("Circulo de raio %g\n", circ->r);
    }
    else if(item->id == RET)
    {
        Retangulo* ret = item->figura;
        printf("Retangulo de base %g e altura %g\n", ret->b, ret->h);
    }
    else
    {
        Triangulo* tri = item->figura;
        printf("Triangulo de base %g e altura %g\n", tri->b, tri->h);
    }
}

void itemFree(Item item)
{
    free(item->figura);
    free(item);
    item = NULLitem;
}

