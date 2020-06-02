#include <stdio.h>

int main() {
    int number=5;
    int *numberPointer=&number; //One-line referencing
    printf("numberPointer is pointing to address %p\n",numberPointer);
    printf("number has value equal to %d",*numberPointer);
    return 0;
}
