//
//  main.c
//  Bitwise operators.
//
//  Created by Rupaj Sen on 06/02/22.
//

#include <stdio.h>

int main()
{
    unsigned int a = 60;     // 0011 1100
    unsigned int b = 13;     // 0000 1101
    int result = 0;
    
    result = a & b ;
    
    // 0000 1100
    
    printf("Result is : %d\n",result);

    return 0;
}
