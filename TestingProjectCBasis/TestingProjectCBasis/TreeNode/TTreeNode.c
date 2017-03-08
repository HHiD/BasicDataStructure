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
    
    printAllElement(node->left);
    printf("%d\n", node->data);
    printAllElement(node->right);
}

void addValueToTree(pTreeNode *rt, int data){
    
    if (*rt == NULL) {
        pTreeNode nNode = newNode(data);
        *rt = nNode;
        return;
    }
    
    if (data < (*rt)->data) {
        addValueToTree(&(*rt)->left, data);
    }else{
        addValueToTree(&(*rt)->right, data);
    }
}

bool isLeaf(pTreeNode node){
    if (node->left == NULL && node->right == NULL) {
        return true;
    }
    return false;
}
