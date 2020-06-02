#include <stdio.h>

int main() {
    int number=5;
    int *numberPointer; //Declaring pointer for int data type
    numberPointer = &number; //"Point"(Make reference) to 'number' int variable
    printf("numberPointer is pointing to address %p\n",numberPointer); //Getting 'number' address
    printf("number has value equal to %d",*numberPointer); //Getting 'number' value via 'numberPointer'
    return 0;
}
