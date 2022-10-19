#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct Linknode{
    ElemType data;
    struct LinikNode *next;
}*LiStack;