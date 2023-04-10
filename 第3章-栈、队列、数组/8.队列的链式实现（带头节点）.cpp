//带头节点
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct LinkNode{
    ElemType data;
    struct LinkNode *next;
}LinkNode;
typedef struct{
    LinkNode *front,*rear;
}LinkQueue;

//初始化队列（带头节点）
void InitQueue(LinkQueue &Q){
    //初始时front、rear都指向头节点
    Q.front=Q.rear=(LinkNode*)malloc(sizeof(LinkNode));
}

//判断队列是否为空
bool IsEmpty(LinkQueue Q){
    if(Q.front==Q.rear)
        return true;
    else
        return false;
}

//新元素入队（插入操作）(带头节点)
void EnQueue(LinkQueue &Q,ElemType x){
    LinkNode *s=(LinkNode*)malloc(sizeof(LinkNode));
    s->data=x;
    s->next=NULL;
    Q.rear->next=s;
    Q.rear=s;
}

//出队（带头节点）
bool DeQueue(LinkQueue &Q,ElemType &x){
    if(Q.front==Q.rear)
        return false;       //空队
    LinkNode *p=Q.front->next;  //头节点后的第一个元素
    x=p->data;
    Q.front->next=p->next;
    if(Q.rear==p)
        Q.rear=Q.front;
    free(p);
    return true;
}

int main(){
    LinkQueue Q;
    InitQueue(Q);
}
