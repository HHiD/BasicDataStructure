//
//  TTreeNode.c
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 07/03/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#include "TTreeNode.h"

pTreeNode newNode(int data){
    pTreeNode node = malloc(sizeof(TreeNode));
    node->data = data;
    node->right = NULL;
    node->left = NULL;
    return node;
}

int maxDepth(pTreeNode node){
    if (node == NULL){
        return 0;
    }else{
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
        if (lDepth > rDepth) {
            return (lDepth + 1);
        }else{
            return (rDepth + 1);
        }
    }
}

void printAllElement(pTreeNode node){
    
    if (node == NULL) {
        return;
    }
    printf("%d\n", node->data);
    printAllElement(node->left);
    printAllElement(node->right);
}
