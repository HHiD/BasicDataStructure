//
//  TLinkList.c
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 06/03/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#include "TLinkList.h"
//initialize NodeList
pNode create_list(int len){
    
    pNode pHead = malloc(sizeof(Node));
    pHead->pNext = NULL;
    pNode pTail = pHead;
    for (int i = 0; i < len; i++) {
        int val;
        printf("请输入第%d个元素的值:", i+1);
        scanf("%d", &val);
        pNode pNew = malloc(sizeof(Node));
        pNew->data = val;
        pNew->pNext = NULL;
        pTail->pNext = pNew;
        pTail=pNew;
        printf("\n");
    }
    return pHead;
}

//traverse Node list
void traverse(pNode pHead){
    pNode p = pHead -> pNext;
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->pNext;
    }
    printf("\n");
}

//to check is this list is a empty list
bool isEmpty(pNode pHead){
    if (pHead->pNext == NULL) {
        return true;
    }
    return false;
}

// get list length
int list_length(pNode pHead){
    
    pNode p = pHead->pNext;
    int length = 0;
    while (p != NULL) {
        length++;
        p = p->pNext;
    }
    return length;
}

//insert node to the list
bool insert_list(pNode pHead, int val, int pos){
    
    
    int i = 0;
    pNode p = pHead;
    //The find the Node position
    while(NULL != p && i < pos-1)
    {
        i++;
        p = p->pNext;
    }
    
    //check if this is illegal position
    if(i > pos - 1 || NULL == p)
    {
        printf("illegal position\n");
        return false;
    }
    pNode PNew = malloc(sizeof(Node));
    PNew->data = val;
    pNode temp = p->pNext;
    p->pNext = PNew;
    PNew->pNext = temp;
    
    return true;
}

/**
 **在链表中删除节点
 */
bool deleteNode (pNode PHead,int pos , int * pval)
{
    int i = 0;
    pNode p = PHead;
    //我们要删除p后面的节点，所以p不能指向最后一个节点 p->next!=NULL
    while(p->pNext != NULL && i < pos-1){
        
        p = p->pNext;
        i++;
    }
    if(i > pos-1 || p->pNext == NULL)
    {
        printf("删除位置不合法\n");
        return false;
    }
    pNode temp = p->pNext;
    p->pNext = temp->pNext;
    free(temp);
    
    return true;
}





