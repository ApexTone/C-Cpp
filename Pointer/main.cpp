#include <stdio.h>

int main() {
    int a=5, b=10;
    int *pointer1=&a;
    int *pointer2=&b;
    printf("pointer1 point to address %p has value of %d\n",pointer1,*pointer1);
    printf("pointer2 point to address %p has value of %d\n",pointer2,*pointer2);
    printf("----------------------------\n");
    printf("Assign pointer2=pointer1;\n");
    pointer2 = pointer1; // make pointer2 reference to the same address as pointer1
    printf("pointer1 point to address %p has value of %d\n",pointer1,*pointer1);
    printf("pointer2 point to address %p has value of %d\n",pointer2,*pointer2);
    return 0;
}
