#include <stdio.h>

/*
Called a function declaration.
All functions must be declared either directly, above the main function,
or inside of a header file which is included above; eg: #include "header.h"
*/
void Capit4lL33trz();

// Entrypoint of all C programs
int main() {
    /*My first program in C*/
    Capit4lL33trz();
    return(0);
}

// Sample function declaration
void Capit4lL33trz() {
    printf("hello world!\n");
}