//
//  TArray.c
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 06/03/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#include "TArray.h"


void init_array(struct Arr * pArray, int len){
    
    pArray->pBase = (int *)malloc(sizeof(int)*len);
    if (pArray->pBase == NULL) {
        printf("Memory initilize failed!");
    }else{
        pArray->len = len;
        pArray->count = 0;
    }
    return;
}

//Is empty
bool isempty(struct Arr * parray){
    if (parray->count == 0) {
        return true;
    }
    return false;
}

//Is full
bool isfull(struct Arr *pArray){
    if (pArray -> len == pArray -> count) {
        return true;
    }
    return false;
}

//Show array
void show_array(struct Arr *pArray){
    if (isempty(pArray)) {
        printf("This is an Empty Array!");
    }else{
        for (int i = 0; i < pArray->count; i++) {
            printf("%d \n", pArray->pBase[i]);
        }
        printf("---------------------------------\n");
    }
}

//Append number to array
bool append(struct Arr *pArray, int val){
    if (isfull(pArray)) {
        printf("This is array is totally full \n");
        return false;
    }else{
        pArray->pBase[pArray->count] = val;
        pArray->count ++;
        return true;
    }
}

//insert value into array
bool insert(struct Arr *pArray, int val, int position){
    if (position < 1 || position > pArray->len + 1) {
        printf("illegal position");
        return false;
    }
    if (isfull(pArray)) {
        printf("This array has already full");
        return false;
    }
    for (int i = pArray->count; i>position; i--) {
        pArray->pBase[i] = pArray->pBase[i - 1];
    }
    
    pArray->pBase[position - 1] = val;
    pArray->count ++;
    pArray->len++;
    return true;
    
}

//Delete Value
bool deleteValue(struct Arr *pArray, int position, int *val){
    if(position < 1 || position > pArray -> count){
        printf("Delete falied");
        return false;
    }
    int i;
    *val = pArray->pBase[position - 1];
    for (i = position+1; i <= pArray->count; i++) {
        pArray->pBase[i-2]=pArray->pBase[i-1];
    }
    pArray->count--;
    return true;
}
//Reverse Array
bool inverse(struct Arr * pArray)
{
    if(isempty(pArray))
    {
        printf("倒置失败，因数组为空");
        return false;
    }
    
    int i=0;
    int j=pArray->count-1;
    
    int temp;
    while(i<j)
    {
        temp=pArray->pBase[i];
        pArray->pBase[i]= pArray->pBase[j];
        pArray->pBase[j]=temp;
        i++;
        j--;
    }
    return true;
    
}
