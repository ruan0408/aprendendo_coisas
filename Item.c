#include <stdlib.h>
#include <stdio.h>
#include "Item.h"

struct item
{
    int n;
};

void setItemN(Item item, int n)
{
    if(sizeof(*item) != sizeof(struct item)) return;
    item->n = n;
}
int getItemN(Item item)
{
    if(sizeof(*item) != sizeof(struct item)) return -1;
    return item->n ;
}

Item itemAlloc()
{
    Item novo = malloc(sizeof *novo);
    return novo;
}

void itemShow(Item item)
{
    printf("%d\n", item->n);
}

void itemFree(Item item)
{
    if(sizeof(*item) != sizeof(struct item)) return;
    free(item);
    item = NULLitem;
}

