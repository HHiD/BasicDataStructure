//
//  main.c
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 06/03/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#include <stdio.h>
#include "TArray.h"
#include "TNodeList.h"
#include "DoubleNodeList.h"
#include "TTreeNode.h"

void changeValue(int *a){
    printf("%p", a);
    *a = *a + 2;
    printf("%p", a);
}

int main(int argc, const char * argv[]) {
    
    //--------------Array--------------
    /*
    struct Arr arr;
    init_array(&arr, 6);
    append(&arr,1);
    append(&arr,2);
    append(&arr,3);
    append(&arr,4);
    show_array(&arr);
    insert(&arr, 9, 1);
    show_array(&arr);
    int val;
    deleteValue(&arr, 1, &val);
    show_array(&arr);
    printf("删除了%d\n", val);
    inverse(&arr);
    show_array(&arr);
    */
    
    //--------------One way Node List--------------
    /*
    pNode PHead = create_list(6);
    if(isEmpty(PHead))
        printf("链表为空\n");
    printf("链表的长度为：%d\n",list_length(PHead));
    traverse(PHead);
    insert_list(PHead,55,1);
    int val;
    deleteNode(PHead, 6, &val);
    traverse(PHead);
    return 0;
    */
    
    //--------------Double way Node list--------------
    /*
    pDoubleNode head = initialize_node_list(5);
    tranverseDoubleNodeList(head);
    printf("\n\n\n\n\n");
    printf("-----------------------------------");
    printf("\n\n\n\n\n");
    reverseNode(head);
    */
    
    //--------------Pointer Memory Test--------------
    /*
    int a = 10, *pa = &a, *paa = &a;
    double b = 99.0, *pb = &b;
    char c = '@', *pc = &c;
    
    printf("&a=%#X, &b=%#X, &c=%#X\n", &a, &b, &c);
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    printf("---------------------------------------\n");
    printf("&a=%p, &b=%p, &c=%p\n", &a, &b, &c);
    printf("pa=%p, pb=%p, pc=%p\n", pa, pb, pc);
    printf("\n\n---------------------------------------\n\n");
    pa++; pb++; pc++;
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    printf("pa=%p, pb=%p, pc=%p\n", pa, pb, pc);
    */
    
    
    //--------------Binary Tree--------------
    
//    int c = 1;
//    changeValue(&c);
//    printf("%d\n", c);
    
    int dataSet[] = {12, 2, 16, 5, 1, 15, 18};
    
    int count = sizeof(dataSet)/sizeof(int);
    pTreeNode rootNode = NULL;
    for (int i = 0; i < count; i++) {
        addValueToTree((&rootNode), dataSet[i]);
    }
    printAllElement(rootNode);
}



