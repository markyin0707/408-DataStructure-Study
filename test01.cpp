#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct SNode{
    ElemType data;
    struct SNode *next;
}SNode,*LinkStake;

bool InitStake(LinkStake &S){
    S=(SNode *)malloc(sizeof(SNode));
    if(S==NULL)
        return false;
    S->next=NULL;
    return true;
}

bool InsertStake(LinkStake &S,ElemType e){
    SNode *t=(SNode *)malloc(sizeof(SNode));
    if(t==NULL)
        return false;
    t->data=e;
    t->next=S->next;
    S->next=t;
    return true;
}

int main(){

}