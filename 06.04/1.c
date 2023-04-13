#include <stdio.h>
#include <stdlib.h>

// void Pointers(int* ptr, const int* value);
void Pointers(int* ptr, const int* value, int arr[], int* arr1);
int main() {
    int* ptr;
    int a =13;
    
    ptr = &a;
    printf("Pointer inside: %p\n", ptr);
    printf("Pointer: %p\n", &ptr);
    printf("Pointer : %p\n", &a);

    int arr[]= {3,4,5};
    int arr1[]= {30,40,50};
    int * ptrArr = arr;
    int * ptrArr2 = &arr[0];
    printf("ptrArr: %d\n", arr);
    printf("ptrArr2: %p\n", ptrArr2);

    Pointers(ptr, &a, arr, &arr1[0]);
    printf("main: %d\n", arr[2]);
    return 0;
}

// void Pointers(int* ptr, const int* value){
//     pritnf('%d\n', *value);
// }

void Pointers(int* ptr, const int* value, int arr[], int* arr1){
    pritnf('%d\n', *value);
    arr[2]= 8000;


    // pritnf('%d\n', arr[2]);
}