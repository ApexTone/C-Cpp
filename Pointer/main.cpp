#include <stdio.h>

int main() {
    int a[]={12,25,30,42,53};
    int *aPointer = a;//point to array, Note that you don't need '&' in front of the array
    for(int i=0;i<5;i++)
    {
        printf("%d ",aPointer[i]); //looping through array using pointer
    }
    return 0;
}
