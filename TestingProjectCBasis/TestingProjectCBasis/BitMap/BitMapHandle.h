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


/**
 Generate continuly and nondulplicate numbers

 @param count from 0 ~ cout
 @return number arrays
 */
int* generateNumbers(unsigned int count);

/**
 Check if this number in this bitSet existed

 @param bitSet the bitSet
 @param number the number
 @return yes or no
 */
bool checkNumber(int bitSet[], int number);

/**
 Set number to bitmap(bitarray)

 @param A the bitmap
 @param number number needs to set
 */
void setInteger(int A[], int number);

/**
 To query a array of numbers. NOTE: this array must be continue number array

 @param A number's array
 @param count the count of this array
 @return queried array
 */
int* sortIntSet(int* A, int count);

#endif /* BitMapHandle_h */
