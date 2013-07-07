#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

#define NULLitem  NULL

typedef struct item* Item;

void setItemN(Item, int);
int getItemN(Item);
Item itemAlloc();
void itemShow(Item);
void itemFree(Item);
int itemCmp(const void*, const void*);

#endif /* ITEM_H_INCLUDED*/
