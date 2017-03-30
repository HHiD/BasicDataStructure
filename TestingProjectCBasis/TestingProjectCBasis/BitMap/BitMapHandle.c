//
//  BitMapHandle.c
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 30/03/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#include "BitMapHandle.h"
#include <time.h>
#include <stdlib.h>

int getBitCount(unsigned int count){
    
    int bitCount = count / INT_TO_BIT_SIZE;
    if (count % 32) {
        bitCount ++;
    }
    
    return bitCount;
}

int* generateNumbers(unsigned int count){
    
    int bitCount = getBitCount(count);
    int *result = (int *)calloc(count, sizeof(int));
    int *bitSet = (int *)calloc(bitCount, sizeof(int));
    
    int size = count;
    int index = 0;
    srand((unsigned)time(NULL));
    while (size) {
        
        int number = rand()%count;
        
        if (!checkNumber(bitSet, number)) {
            
            setInteger(bitSet, number);
            result[index] = number;
            index ++;
            size --;
        }
    }
    
    return result;
}

bool checkNumber(int bitSet[], int number){
    
    int setIndex = number / INT_TO_BIT_SIZE;
    int bitIndex = number % INT_TO_BIT_SIZE;
    int flag = 1;
    flag = flag << bitIndex;
    
    return bitSet[setIndex] & flag;
}

void setInteger(int A[], int number){
    
    int bitSize = 32;
    int setIndex = number / bitSize;
    int numberIndex = number % bitSize;
    
    int flag = 1;
    
    flag = flag << numberIndex;
    
    A[setIndex] = flag | A[setIndex];
}

int* queryIntSet(int* A, int count){
    
    int bitCount = getBitCount(count);
    int *bitSets = calloc(bitCount, sizeof(int));
    int *result = calloc(count, sizeof(int));
    
    for (int i = 0; i < count ; i++) {
        setInteger(bitSets, A[i]);
    }
    
    int index = 0;
    int value = 0;
    for (int i = 0; i < bitCount; i++) {
        
        int set = bitSets[i];
        int setIndex = 0;
        for (int j = 0; j < INT_TO_BIT_SIZE; j++) {
            int flag = 1;
            flag = flag << setIndex;
            bool isIn = flag & set;
            if (isIn) {
                result[index] = value;
                index++;
            }
            setIndex++;
            value++;
            
        }
        
    }
    return result;
}


