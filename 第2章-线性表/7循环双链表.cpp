#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct DNode{
    ElemType data;
    struct DNode *prior,*next;
}DNode,*DLinkList;
bool InitDLinkList(DLinkList &L){
    L=(DNode*)malloc(sizeof(DNode));
    if(L==NULL)
        return false;
    L->prior=L;
    L->next=L;
    return true;
}
bool Empty(DLinkList &L){
    if(L-next=L)
        return true;
    else
        return false;
}
bool isTail(DLinkList &L,DNode *p){
    if(p->next==L)
        return true;
    else
        return false;
}
int main(){
    DLinkList L;
    InitDLinkList(L);
}