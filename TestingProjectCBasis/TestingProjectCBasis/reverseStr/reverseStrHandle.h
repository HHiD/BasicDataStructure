//
//  reverseStrHandle.h
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 06/04/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#ifndef reverseStrHandle_h
#define reverseStrHandle_h


#include <stdio.h>

/**
 Reverse a string

 @param A The string
 @param start The start position for reverse procedure
 @param end The end postion for reverse procedure
 */
void reverseStr(char *A, int start, int end);


/**
 Separetly reverse two subset of a string

 @param A The string
 @param start The start position for reverse procedure
 @param pos The position separate the string
 @param end The end position of reverse procedure
 */
void reverseStrBlock(char *A, int start, int pos, int end);

#endif /* reverseStrHandle_h */


