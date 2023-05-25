#include <stdio.h>
#include <string.h>  // Allows for the editing of strings

int main(){
    char name[25];
    int age;

    printf("What's your name? ");
    
    // scanf("%s", &name);            // If we don't need to accept whitespace, we can use the scanf() function with &
    
    fgets(name, 25, stdin);           // fgets() function is used when we need to take user input             
                                      // that includes white spaces. Be aware, fgets() includes a \n by default
                                      // fgets receives 3 args; variable name (no need to include &),
                                      // size allocation in bytes, and input type (here it is stdin, meaning standard)

    name[strlen(name)-1]  = '\0';     // syntax for editing the string to remove \n (newline) character                         
                                      // this will be revisted with more explanation at a later date

                                  

    printf("\nHow old are you? ");
    scanf("%d", &age);

    printf("Hello, %s! How are you?\n", name);
    printf("You are %d years old. Wow, so young!", age);


    return 0;
}