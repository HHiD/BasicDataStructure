//
//  DoubleNodeList.h
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 06/03/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#ifndef DoubleNodeList_h
#define DoubleNodeList_h
#include <mm_malloc.h>
#include <stdbool.h>
typedef struct DoubleNode{
    int data;//Data Area
    struct DoubleNode *pHead; //point lead to head node
    struct DoubleNode *pNext; //point lead to next node
}DoubleNode, *pDoubleNode;

pDoubleNode initialize_node_list(int length);

void tranverseDoubleNodeList(pDoubleNode pHead);

pDoubleNode reverseNode(pDoubleNode pHead);
#include <stdio.h>

#endif /* DoubleNodeList_h */
