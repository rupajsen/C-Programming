//  main.c
//  This programs helps to check a number is odd or even.
//
//  Created by Rupaj Sen on 09/02/22.
//

#include <stdio.h>

int main()
{
    int number_to_test, remainder;
    
    printf("Enter you number to be tested: \n");
    scanf("%i", &number_to_test);
    remainder = number_to_test % 2;
    
    if (remainder==0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
    
    
    return 0;
}
