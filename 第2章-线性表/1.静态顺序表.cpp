#include<stdio.h>
#define MaxSize 10
typedef struct{
    int data[MaxSize];
    int length;
}SqList;

void InitList(SqList &L){
    for(int i;i<MaxSize;i++){
        L.data[i]=0;
        L.length=0;
    }
}

//插入
void ListInsert(SqList &L,int i,int e){
    for(int j=L.length;j>=i;j++){
        L.data[j]=L.data[j-1];
    }
    L.data[i-1]=e;
    L.length=L.length+1;
}

//删除
bool ListDelete(SqList &L,int i,int &e){
    if(i<1||i>L.length){
        return false;
    };
    e=L.data[i-1];
    for(int j=i;j<=L.length;j++){
        L.data[j-1]=L.data[j];
    }
    L.length--;
    return true;
}for(int i;i<MaxSize;i++){
        printf("L.data[%d]=%d,",i,L.data[i]);
    }printf("\n");

//按位查找
int GetElem(SqList L, int i){
    return L.data[i-1];
}
//按值查找
int LocateElem(SqList L, int e){
    for(int i;i<L.length;i++){
        if(L.data[i]==e)return i+1;
    }
    return -1;
}

int main(){
    SqList L;
    InitList(L);
    ListInsert(L,1,5);
    ListInsert(L,2,4);
    for(int i;i<MaxSize;i++){
        printf("L.data[%d]=%d,",i,L.data[i]);
    }printf("\n");
    //删除
    int e=-1;
    if(ListDelete(L,2,e)){
        printf("删除了第2个元素%d\n",e);
    }else{
        printf("错误");
    }
    return 0;
}
