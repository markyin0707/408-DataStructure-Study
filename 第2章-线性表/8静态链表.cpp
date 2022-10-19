#include<stdio.h>
typedef int ElemType
#define MaxSize 10
typedef struct Node{
    ElemType data;//数据元素
    int next;//下一个元素的数组下标
}SLinkList[MaxSize];

int mian(){
    SLinkList a;
    struct Node b[MaxSize];//和上面等价
}