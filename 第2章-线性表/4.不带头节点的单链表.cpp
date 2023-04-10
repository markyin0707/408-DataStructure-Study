#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

bool InitList(LinkList &L){
    L=NULL;
    return true;
}

bool Empty(LinkList L){
    return L==NULL;
}

//不带头节点插入
bool ListInsert(LinkList &L,int i,int e){
    if(i<1)
        return false;
    //插入第一个节点操作与其他节点不同
    if(i==1){
        LNode *s=(LNode *)malloc(sizeof(LNode));
        s->data=e;
        s->next=L->next;
        L=s;
        return true;
    }
    //当i！=1的情况
    LNode *p=L;
    int j=1;
    while(p!=NULL&&j<i-1){
        p=p->next;
        j++;
    }
    if(p==NULL)
        return false;
    LNode *s=(LNode *)malloc(sizeof(LNode));
    s->data=e;
    s->next=p->next;
    p->next=s;
    return true;
}

int main(){
}