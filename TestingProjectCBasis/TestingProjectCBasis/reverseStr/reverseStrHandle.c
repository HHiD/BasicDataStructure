//
//  reverseStrHandle.c
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 06/04/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#include "reverseStrHandle.h"


void reverseStrBlock(char *A, int start, int pos, int end){
    reverseStr(A, start, pos);
    reverseStr(A, pos + 1, end);
    reverseStr(A, start, end);
}


void reverseStr(char *A, int start, int end){
    
    for (int i = start, j = end; i < j; i++, j--) {
        char temp = A[i];
        char charJ = A[j];
        A[i] = charJ;
        A[j] = temp;
    }
}
