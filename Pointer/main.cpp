#include <stdio.h>

int main() {
    int a=5;
    int *pointer1=&a, *pointer2=&a; //referencing same variable (a)
    printf("pointer1 point to address %p has value of %d\n",pointer1,*pointer1);
    printf("pointer2 point to address %p has value of %d\n",pointer2,*pointer2);
    printf("----------------------------\n");
    printf("Changing 'a' value with pointer1 to 999\n");
    *pointer1=999;
    printf("pointer1 point to address %p has value of %d\n",pointer1,*pointer1);
    printf("pointer2 point to address %p has value of %d\n",pointer2,*pointer2); //Note that *pointer2 value also change
    return 0;
}
