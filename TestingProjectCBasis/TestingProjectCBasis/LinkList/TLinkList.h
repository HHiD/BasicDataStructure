//
//  TLinkList.h
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 06/03/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#ifndef TLinkList_h
#define TLinkList_h

#include <stdio.h>
#include <mm_malloc.h>
#include <stdbool.h>

typedef struct Node{
    int data;//Data Area
    struct Node *pNext; //point lead to next node
}Node, *pNode;

//initialize NodeList
pNode create_list(int len);

//traverse Node list
void traverse(pNode pHead);

//to check is this list is a empty list
bool isEmpty(pNode pHead);

// get list length
int list_length(pNode pHead);

//insert node to the list
bool insert_list(pNode pHead, int val, int pos);

bool deleteNode (pNode PHead,int pos , int * pval);
#endif /* TLinkList_h */
