//
//  main.c
//  Calculate the perimeter and area of a rectangle
//
//  Created by Rupaj Sen on 01/02/22.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double width = 22.2;
    double height = 24.3;
    double permiter = 0.0;
    double area = 0.0;
    
    permiter = 2.0 * (height+width);
    area = height*width;
    
    printf("Perimeter is : %f\n", permiter);
    printf("Area is : %f\n",area);
    
    return 0;
}
