//
//  DoubleNodeList.c
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 06/03/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#include "DoubleNodeList.h"

pDoubleNode initialize_node_list(int length){
    
    
    pDoubleNode pNode = NULL;
    pDoubleNode headNode = NULL;
    for (int i = 0; i < length; i ++) {
        
        int val;
        printf("请输入第%d节点的值: ",i+1);
        scanf("%d", &val);
        
        pDoubleNode newNode = malloc(sizeof(DoubleNode));
        newNode->data = val;
        newNode->pNext = NULL;
        if (i == 0) {
            newNode->pHead = NULL;
            headNode = newNode;
        }else{
            pNode->pNext = newNode;
            newNode->pHead = pNode;
        }
        pNode = newNode;
    }
    return headNode;
}

void tranverseDoubleNodeList(pDoubleNode pHead){
    
    pDoubleNode p = pHead;
    
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->pNext;
    }
}

pDoubleNode reverseNode(pDoubleNode pHead){
    
    pDoubleNode p = pHead;
    if (p->pNext == NULL) {
        printf("This Node List Has No Next Node!");
        return NULL;
    }
    pDoubleNode result = NULL;
    while (p != NULL) {
        pDoubleNode temp;
        temp = p->pHead;
        p->pHead = p->pNext;
        p->pNext = temp;
        if (p->pHead == NULL) {
            result = p;
        }
        p = p->pHead;
        
    }
    
    tranverseDoubleNodeList(result);
    
    return result;
}


