//不带头节点队列
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct LinkNode{
    ElemType data;
    LinkNode *next;
}LinkNode;
typedef struct{
    LinkNode *front,*rear;
}LinkQueue;

//初始化队列(不带头节点队列)
void InitQueue(LinkQueue &Q){
    Q.front=NULL;
    Q.rear=NULL;
}

//判断队列是否为空
bool IsEmpty(LinkQueue Q){
    if(Q.front==NULL)
        return true;
    else
        return false;
}

//入队（不带头节点）
void EnQueue(LinkQueue &Q,ElemType x){
    LinkNode *s=(LinkNode*)malloc(sizeof(LinkNode));
    s->data=x;
    s->next=NULL;
    //判断是否为空
    if(Q.front==NULL){
        Q.front=s;
        Q.rear=s;
    }else{
        Q.rear->next=s;
        Q.rear=s;
    }
}

//出队（不带头节点）
bool DeQueue(LinkQueue &Q,ElemType x){
    if(Q.front==NULL)
        return false;
    LinkNode *p=Q.front;
    x=p->data;
    Q.front=p->next;
    //此次是最后一个节点出队
    if(Q.rear==p)
        Q.front=NULL;
        Q.rear=NULL;
    free(p);
    return(true);
}

int main(){

}
