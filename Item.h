#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

#define NULLitem -1
typedef /*struct*/ int Item;

void itemShow(Item);
void itemFree(Item);
int itemCmp(const void*, const void*);
#endif /* ITEM_H_INCLUDED*/
