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


#define SetBit(A,k)     ( A[(k/32)] |= (1 << (k%32)) )
#define ClearBit(A,k)   ( A[(k/32)] &= ~(1 << (k%32)) )
#define TestBit(A,k)    ( A[(k/32)] & (1 << (k%32)) )

#define BIT_SIZE (sizeof(int) * 8)


int * generateInteger(int size);

void initailizeNumbers(int count);

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
    
    
    //--------------Binary Search Tree--------------
    
//    int c = 1;
//    changeValue(&c);
//    printf("%d\n", c);
    
//    int a = 2;
//    int *b = &a;
//    
//    printf("%d\n\n", a);
//    printf("%p\n\n", &a);
    /*&
    int dataSet[] = {12, 2, 16, 5, 1, 15, 18, 22, 4, 32, 51, 41, 20, 3};
    
    int count = sizeof(dataSet)/sizeof(int);
    pTreeNode rootNode = NULL;
    for (int i = 0; i < count; i++) {
        addValueToTree((&rootNode), dataSet[i]);
    }
    printAllElement(rootNode);
    */
    
    
//    int A[10];
//    int i;
//    
//    for ( i = 0; i < 10; i++ )
//        A[i] = 0;                    // Clear the bit array
//    
//    printf("Set bit poistions 100, 200 and 300\n");
//    SetBit( A, 100 );               // Set 3 bits
//    SetBit( A, 200 );
//    SetBit( A, 300 );
//    
//    
//    // Check if SetBit() works:
//    
//    for ( i = 0; i < 320; i++ )
//        if ( TestBit(A, i) )
//            printf("Bit %d was set !\n", i);
//    
//    printf("\nClear bit poistions 200 \n");
//    ClearBit( A, 200 );
//    
//    // Check if ClearBit() works:
//    
//    for ( i = 0; i < 320; i++ )
//        if ( TestBit(A, i) )
//            printf("Bit %d was set !\n", i);
    
    printf("%d \n", 9 | 2);
    printf("%lu \n", sizeof(int));
    int x = 1;
    printf("%d \n", x << 1);
    
    initailizeNumbers(100);
}

int * generateInteger(int size){
    
    int bitSize = (sizeof(int) * 8);
    int bitCount = size / bitSize;
    if (size%32) {
        bitCount ++;
    }
    
    int *result = malloc(sizeof(int) * size);
    int *bitSet = malloc(sizeof(int) * bitCount);
    
    int count = size;
    
    while (count) {
        int number = rand()%size;
        int setIndex = number / bitSize;
        int bitIndex = number % bitSize;
        
        int flag = 1;
        flag = flag << bitIndex;
        
        if (bitSet[setIndex] & flag) {
            printf("number: %d has already be here \n", number);
        }else{
            printf("%d \n", number);
            bitSet[setIndex] = bitSet[setIndex] | flag;
            count --;
        }
    }
    
    printf("Something happend \n");
    int number = 0;
    for (int i = 0; i < bitSize; i++) {
        int flag = 1;
        
        if (bitSet[0] & flag) {
            printf("number: %d \n", number);
        }
        number ++;
        flag = flag << i;
    }
    
    return result;
}




void initailizeNumbers(int count){
    
    int bitCount = count / BIT_SIZE;
    if (count % 32) {
        bitCount ++;
    }
    
    int *result = (int *)malloc(sizeof(int) * count);
    int *bitSet = (int *)malloc(sizeof(int) * bitCount);
    int size = count;
    int index = 0;
    while (size) {
        int number = rand()%count;
        int setIndex = number / BIT_SIZE;
        int bitIndex = number % BIT_SIZE;
        
        int flag = 1;
        flag = flag << bitIndex;
        
        if (bitSet[setIndex] & flag) {
//            printf("number: %d has already be here \n", number);
        }else{
            
            printf("%d \n", number);
            
            bitSet[setIndex] = bitSet[setIndex] | flag;
            result[index] = number;
            index ++;
            size --;
        }
    }

    printf("\n\n\n\n\n\n\n\n");
    
//    int cc = sizeof(result) / sizeof(int);
    
    for (int i = 0; i < count ; i++) {
        printf("%d \n", result[i]);
    }
    
    
}


void setInteger(int A[], int number){
    
    int bitSize = 32;
    int setIndex = number / bitSize;
    int numberIndex = number % bitSize;
    
    int flag = 1;
    
    flag = flag << numberIndex;
    
    A[setIndex] = flag | A[setIndex];
}


