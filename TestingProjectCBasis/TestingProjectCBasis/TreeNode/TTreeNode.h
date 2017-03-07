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


#endif /* TTreeNode_h */
