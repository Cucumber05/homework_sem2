#include <stdio.h>
#include <stdlib.h>


void swap(void* a, void* b, size_t size);
int main()
{
    int a =15;
    int b =30;
    /*void* ptr= &a;
    int arr[2] = {1,3};
    void* ptr2= &arr[0];
    void* ptr3;
    int* pttr2 = ((int*)ptr2);
    printf("%d\n", *((int*)ptr));
    printf("%d\n", *(++pttr2));
    
    ptr3 = malloc(sizeof(int));
    free(ptr3);*/
    
    swap(&a, &b, sizeof(char));
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}


void swap(void* a, void* b, size_t size){
    char* tmp;
    tmp = (char*)malloc(size);
    memcpy(tmp, a, size);
    memcpy(a, b, size);
    memcpy(b, tmp, size);
    free(tmp);
}