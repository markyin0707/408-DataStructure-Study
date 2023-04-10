//top指针指向下一个可以插入元素的位置
//初始化时top=0
#include<stdio.h>
#define MaxSize 10
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];
    int top;
}SqStack;

void InitStack(SqStack &S){
    S.top=0;
}
bool StackEmpty(SqStack &S){
    if(S.top==0)
        return true;
    else
        return false;
}
//进栈
bool Push(SqStack &S,ElemType x){
    if(S.top==MaxSize-1)
        return false;
    S.data[S.top]=x;
    S.top=S.top+1;
    //S.data[S.top++]=x;    //区分另一种情况
    return true;
}
//出栈（数据还残留在内存中，只是逻辑上被删除）
bool Pop(SqStack &S,ElemType &x){
    if(S.top==-1)
        return false;
    S.top=S.top-1;      //指针再减1
    x=S.data[S.top];    //栈顶元素先出栈
    //x=S.[--S.top];    区分另一种情况
    return true;
}
int main(){

}
