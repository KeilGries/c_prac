#include <stdio.h>

int main(){

    // arithmetic opperators

    // + addition
    // - subtraction
    // * multiplication
    // / division
    // % modulus
    // ++ increment
    // -- decrement

    int x = 5;
    int y = 2;

   
    // Dividing Without Truncating

     float z = x / (float) y; // solution variable and divisor must both be floats or converted to floats,
                              // else the decimal point will be dropped and the division will be truncated
    printf("%f\n", z);

    
    // Modulus Operator

    int n = x % y;  // modulus operator gives you the remainder of two numbers
    
    printf("%d\n", n);


    // Increments and Decrements

    x++;  // increases or decreases value by 1; useful in loops
    y--;

    printf("%d\n", x);
    printf("%d\n", y);
        
    return 0;    
}