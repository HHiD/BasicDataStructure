//
//  BinarySearch.c
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 19/04/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#include "BinarySearch.h"

int searchValue(int *array, int number, int left, int right){
    
    int mid = (right + left) / 2;
    
    if (left > right) {
        return -1;
    }
    if (number == array[mid]) {
        return mid;
    }
    if (number > array[mid]) {
        
        return searchValue(array, number, mid + 1, right);
    }
    if (number < array[mid]) {
        
        return searchValue(array, number, left, mid - 1);
    }
    return -1;
}
