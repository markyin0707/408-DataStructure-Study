//推荐使用不带头节点的情况
#include<stdio.h>
#include<stdlib.h>
typedef struct Linknode{
    ElemType data;
    struct Linknode *next;
}*LiStack;
//有不带头节点和带头节点两个版本
//进栈/出栈都只能在栈顶一段进行（链头作为栈顶）