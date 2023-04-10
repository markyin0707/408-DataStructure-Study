//带头节点链栈
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct SNode{
    ElemType data;
    struct SNode *next;
}*LinkStake;

bool InitStake(LinkStake &S){
    S=(SNode *)malloc(sizeof(SNode));
    if(S==NULL)
        return false;
    S->next=NULL;
    return true;
}
bool Empty(LinkStake &S){
    return S->next==NULL;
}
//头插法
bool InsertStake(LinkStake &S, ElemType e){
    if(S==NULL)
        return false;
    SNode *t=(SNode *)malloc(sizeof(SNode));
    if(S==NULL)
        return false;
    t->data=e;
    t->next=S->next;
    S->next=t;
    return true;
}
int main(){
    //LinkStake S;
    //InitStake(S);
}