#include<stdio.h>
#define MaxSize 10
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];
    int top0;   //0号栈栈顶指针
    int top1;   //1号栈栈顶指针
    //栈满条件：top0+1==top1
}ShStack;
void InitStack(ShStack &S){
    S.top0=-1;
    S.top1=MaxSize;
}

int main(){

}