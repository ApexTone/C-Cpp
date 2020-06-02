#include <stdio.h>

int main() {
    int a=5,b=10;
    int *aPointer=&a,*bPointer=&b; //making references to int variables
    printf("Use pointer to sum to value, a=%d, b=%d, a+b=%d",*aPointer,*bPointer,*aPointer+*bPointer);
    return 0;
}
