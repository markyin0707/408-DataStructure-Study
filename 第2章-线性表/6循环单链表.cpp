#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

bool InitList(LinkList &L){
    L=(LNode*)malloc(sizeof(LNode));
    if(L==NULL)return false;
    L->next=L;
    return true;
}

//判断是否是尾结点
bool isTail(LinkList L,LNode *p){
    if(p->next==L)
        return true;
    else
        return false;
}

int main(){
    
}