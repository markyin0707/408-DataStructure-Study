//带头节点
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
    L->prior=NULL;   //这里指向头节点就是循环双链表的初始化操作
    L->next=NULL;
    return true;
}
bool Empty(DLinkList L){
    if(L->next==NULL)
        return true;
    else
        return false;
}
bool InsertNextDNode(DNode *p,DNode *s){
    if(p==NULL||s==NULL)
        return false;
    s->next=p->next;
    if(p->next==NULL)
        p->next->prior=s->prior;
    p->next=s;
    s->prior=p;
    return true;
}
//删除p结点的后继结点
bool DeleteNextDNode(DNode *p){
    if(p==NULL)
        return false;
    DNode *q=p->next;
    if(p==NULL)
        return false;
    p->next=q->next;
    if(q->next!=NULL)
        q->next->prior=p;
    free(q);
    return true;
}
//销毁双链表
void DestroyList(DLinkList &L){
    while(L->next!=NULL){
        DeleteNextDNode(L);
    }
    free(L);
    L=NULL;
}

int main(){
    DLinkList L;
    InitDLinkList(L);
}