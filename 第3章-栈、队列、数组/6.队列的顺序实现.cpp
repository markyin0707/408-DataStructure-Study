#include<stdio.h>
# define MaxSize 10     //定义队列中元素的最大个数
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize]; //用静态数组存放队列元素
    int front,rear;         //队列指针和对尾指针

    //不浪费存储空间判断队空/队满
    //int size  //队列长度
    //int tag   //最近进行的是删除/插入
}SqQueue;
//队列元素的个数：(rear+MaxSize-front)%MaxSize

//初始化队列
void InitQueue(SqQueue &Q){
    //初始化时，对头、队尾指针指向0
    Q.rear=Q.front=0;
    //若队尾指针指向队尾元素
    //Q.front=0;
    //Q.front=Maxize-1;
}

//判断队列是否为空
bool QueueEmpty(SqQueue Q){
    if(Q.rear==Q.front)
        return true;
    else
        return false;
}

//插入数据元素
bool EnQueue(SqQueue Q,ElemType x){
    if((Q.rear+1)%MaxSize==Q.front)     //判断队满
        return false;
    //如果rear指向队尾元素
    //Q.rear=(Q.rear+1)%MaxSize;
    //Q.data[Q.rear]=x;
    Q.data[Q.rear]=x;
    Q.rear=(Q.rear+1)%MaxSize;  //循环队列
    return true;
}

//出队（删除一个队头元素，并返回x ）
bool DeQueue(SqQueue Q,ElemType &x){
    if(Q.rear==Q.front)
        return false;
    x=Q.data[Q.front];
    Q.front=(Q.front+1)%MaxSize;
    return true;
}

//读取队头元素的值，用x返回
bool GetHead(SqQueue Q,ElemType &x){
    if(Q.rear=Q.front)
        return false;
    x=Q.data[Q.front];
    return true;
}

int main(){
    SqQueue Q;

}