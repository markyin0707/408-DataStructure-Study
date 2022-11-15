//推荐使用不带头节点的情况
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct SNode{
    ElemType data;
    struct SNode *next;
}SNode,*LinkStack;
//有不带头节点和带头节点两个版本
//进栈/出栈都只能在栈顶一段进行（链头作为栈顶)
bool InitStack(LinkStack &S){
    S=NULL;
    return true;
}
bool Empty(LinkStack &S){
    return S==NULL;
}

//插入，也就是单链表的头插操作，在p指针后插入元素e
//头插法
bool InsertNextNode(LinkStack S, ElemType e){
    SNode *t = (SNode *)malloc(sizeof(SNode));
    if (t==NULL)
        return false;
    t->data=e;
    t->next=S->next;
    S->next=t;
    return true;
}

int main(){
    LinkStack S;
    InitStack(S);

}
