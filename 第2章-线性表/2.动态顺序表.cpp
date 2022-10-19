#include<stdio.h>
#include<stdlib.h>
#define InitSize 10
typedef struct{
    int *data;
    int MaxSize,length;
}SeqList;

void InitList(SeqList &L){
    L.data=(int *)malloc(InitSize*sizeof(int));
    L.MaxSize=InitSize;
    L.length=0;
}

void IncreaseSize(SeqList &L, int len){
    int *p=L.data;
    L.data=(int *)malloc((L.MaxSize+len)*sizeof(int));
    for(int i=0;i<L.length;i++){
        L.data[i]=p[i];
    }
    L.MaxSize=L.MaxSize+len;
    free(p);
}

//按值查找
int GetElem(SeqList L,int i){
    return L.data[i-1];
}
//按位查找
int LocateElem(SeqList L,int e){
    for(int i;i<L.length;i++){
        if(L.data[i]==e)return i+1;
    }
    return -1;
}

int main(){
    SeqList L;
    InitList(L);
    IncreaseSize(L,5);
    for(int i=0;i<L.MaxSize;i++){
        printf("L.data[%d]=%d\n",i,L.data[i]);
    }
}