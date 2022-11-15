//题目不说就是默认带头节点
#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

//带头节点单链表初始化（更常用）
bool InitList(LinkList L){
    L=(LNode *)malloc(sizeof(LNode));
    if(L==NULL)
        return false;
    L->next=NULL;
    return true;
}
//带头节点插入
bool ListInsert(LinkList &L,int i, int e){
    if(i<1)
        return false;
    LNode *p=L; //指定p指向当前扫描到的结点，L指向头节点，头节点不存数据
    int j=0;    //当前p指向的是第几个节点
    while(p!=NULL&&j<i-1){//循环找到i-1个节点
        p=p->next;
        j++;
    }
    if(p==NULL)
        return false;
    LNode *s=(LNode *)malloc(sizeof(LNode));
    s->data=e;
    s->next=p->next;
    p->next=s;
    return true;
}
//指定节点的后插操作（有无头节点都可）
bool InsertNextNode(LNode *p,int e){
    if(p==NULL)
        return false;
    LNode *s=(LNode *)malloc(sizeof(LNode));
    if(s==NULL)//内存分配失败
        return false;
    s->data=e;
    s->next=p->next;
    p->next=s;
    return true;
}
//指定节点前插操作（有无头节点都可）,时间复杂度 O(1)
bool InsertPriorNode(LNode *p,int e){
    if(p==NULL)
        return false;
    LNode *s=(LNode*)malloc(sizeof(LNode));
    if(s==NULL)
        return false;
    s->next=p->next;
    p->next=s;
    s->data=p->data;
    p->data=e;
    return true;
}
//删除节点（带头节点）
bool ListDelete(LinkList &L,int i,int &e){
    if(i<1)
        return false;
    LNode *p=L;
    int j=0;
    while(p!=NULL&&j<i-1){
        p=p->next;
        j++;
    }
    if(p==NULL)
        return false;
    if(p->next==NULL)
        return false;
    LNode *q=p->next;
    e=q->data;
    p->next=q->next;
    free(q);
    return true;
}
//删除指定节点p（有无头节点都可）
//当p是最后一个节点时有bug
bool DeleteNode(LNode *p){
    if(p==NULL)
        return false;
    LNode *q=p->next;
    p->data=p->next->data;
    p->next=q->next;
    free(q);
    return true;
}
//按位查找
LNode *GetElem(LinkList L,int i){
    if(i<0)
        return NULL;
    LNode *p=L;
    int j=0;
    while(p!=NULL&&j<i){
        p=p->next;
        j++;
    }
    return p;
}
//按值查找
LNode *LocateElem(LinkList L,int e){
    LNode *p=L->next;
    while(p!=NULL&&p->data!=e){
        p=p->next;
    }
    return p;
}
//求表的长度
int Length(LinkList L){
    int len=0;
    LNode *p=L;
    while(p->next!=NULL){
        p=p->next;
        len++;
    }
    return len;
}

//循环尾插法建立单链表
LinkList List_TailInsert(LinkList &L){
    int x;
    L=(LinkList)malloc(sizeof(LNode));//建立一个头节点
    LNode *s,*r=L;  //r为尾指针
    scanf("%d",&x);
    while(x!=9999){
        s=(LinkList)malloc(sizeof(LNode));
        s->data=x;
        r->next=s;
        r=s;
        scanf("%d",&x);
    }
    return L;
}
//头插法
LinkList List_HeadInsert(LinkList &L){
    LNode *s;
    int x;
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;
    scanf("%d",&x);
    while(x!=9999){
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        scanf("%d",&x);
    }
    return 0;
}


int main(){
    LinkList L;
    List_TailInsert(L);

}
