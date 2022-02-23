//
//  main.c
//  Switch Case
//
//  Created by Rupaj Sen on 23/02/22.
//

#include <stdio.h>

int main()
{
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;
    
    switch(today)
    {
        case Sunday:
            printf("Today is Sunday. \n");
            break;
            
        case Monday:
            printf("Today is Monday. \n");
            break;
            
        case Tuesday:
            printf("Today is Tuesday. \n");
            break;
            
        default:
            printf("whatever");
            break;
            
            
    }
    return 0;
}
