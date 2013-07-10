#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

#include "Figuras.h"
#define NULLitem  NULL

typedef struct item* Item;

void setItemRaio(Item, float);
void setItemBase(Item, float);
void setItemAltura(Item, float);
Item itemAlloc(int);
void itemShow(Item);
void itemFree(Item);
int itemCmp(const void*, const void*);

#endif /* ITEM_H_INCLUDED*/
