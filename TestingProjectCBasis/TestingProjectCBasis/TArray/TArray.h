//
//  TArray.h
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 06/03/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#ifndef TArray_h
#define TArray_h
#include <stdio.h>
#include <mm_malloc.h>
#include <stdbool.h>

struct Arr {
    int len;
    int count;
    int * pBase;
};

void init_array(struct Arr * pArray, int len);
//Is empty
bool isempty(struct Arr * parray);
//Is full
bool isfull(struct Arr *pArray);
//Show array
void show_array(struct Arr *pArray);
//Append number to array
bool append(struct Arr *pArray, int val);
//insert value into array
bool insert(struct Arr *pArray, int val, int position);
//Delete Value
bool deleteValue(struct Arr *pArray, int position, int *val);
//Reverse Array
bool inverse(struct Arr * pArray);

#endif /* TArray_h */














