//
//  main.c
//  Enum example
//
//  Created by Rupaj Sen on 01/02/22.
//

#include <stdio.h>

int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};  //defining enum
    
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;
    
    
    printf("The value of xerox is : %d\n", xerox);
    printf("The value of google is : %d\n",google);
    printf("The value of ebay is : %d\n",ebay);
    return 0;
}
