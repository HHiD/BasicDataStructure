//
//  BitMapHandle.h
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 30/03/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#ifndef BitMapHandle_h
#define BitMapHandle_h

#define SetBit(A,k)     ( A[(k/32)] |= (1 << (k%32)) )
#define ClearBit(A,k)   ( A[(k/32)] &= ~(1 << (k%32)) )
#define TestBit(A,k)    ( A[(k/32)] & (1 << (k%32)) )

#define BYTE_TO_BIT_SIZE 8
#define INT_TO_BIT_SIZE (sizeof(int) * BYTE_TO_BIT_SIZE)


#include <stdio.h>
#include <stdbool.h>


int* generateNumbers(unsigned int count);

bool checkNumber(int bitSet[], int number);

void setInteger(int A[], int number);

int getBitCount(unsigned int count);

int* queryIntSet(int* A, int count);

#endif /* BitMapHandle_h */
