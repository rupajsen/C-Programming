//
//  main.c
//  scanf
//
//  Created by Rupaj Sen on 28/01/22.
//

#include <stdio.h>

int main()
{
    char str [100];
    int i;
    printf("Enter a Value:");
    
    scanf("%d  %s",&i,str);
    
    printf("\nYou Entered: %d:::::%s\n",i,str);
    return 0;
}
