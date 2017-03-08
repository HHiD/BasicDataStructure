//
//  TTreeNode.h
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 07/03/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#ifndef TTreeNode_h
#define TTreeNode_h

#include <stdio.h>
#include <mm_malloc.h>
#include <stdbool.h>

typedef struct treeNode{
    int data;
    struct treeNode *left;
    struct treeNode *right;
}TreeNode, *pTreeNode;

/**
 Create New Tree Node

 @param data Data stored in node
 @return the new node
 */
pTreeNode newNode(int data);

/**
 Print all children's value of root Tree
 
 @param node The root node
 */
void printAllElement(pTreeNode node);

/**
 Return the Max depth of root node

 @param node Root node
 @return The max depth
 */
int maxDepth(pTreeNode node);

#endif /* TTreeNode_h */
