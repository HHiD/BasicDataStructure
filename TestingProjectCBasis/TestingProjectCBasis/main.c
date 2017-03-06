//
//  main.c
//  TestingProjectCBasis
//
//  Created by HongDi Huang on 06/03/2017.
//  Copyright © 2017 HongDi Huang. All rights reserved.
//

#include <stdio.h>
#include "TArray.h"
int main(int argc, const char * argv[]) {
    
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
    
    
    return 0;
}



