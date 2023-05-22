#include <stdio.h>

int main (){

    // format specificer % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double (longfloat)
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width 
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%8.2f\n", item1);   // %8.2 indicates 8 spaces should be reserved to display the variable to 2 decimal points of precision
    printf("Item 2: $%-8.2f\n", item2);  // %-8.2 indicates the output will be left justified and 8 spaces should be reserved to display the variable to 2 decimal points of precision
    printf("Item 3: $%9.2f\n", item3);   // %9.2 indicates 9 spaces should be reserved to display the variable to 2 decimal points of precision

}