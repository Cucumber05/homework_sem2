#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> //

void print();

int main(int argc, char* argv[]){
    int a =5;
    int Arr[4]= {1, 2, 3, 4};
    print();
    int* ptr = (int*)malloc(sizeof(int));
    *ptr = 7;
    int* ptr1 = (int*)malloc(4*sizeof(int));
    /*ptr[0] =8; 
    ptr[1] =8; 
    ptr[2] =8; 
    ptr[3] =8; */


    return 0;
}


void print(){
    int num = 8;
}







    /*int A1[3] = {1, 2, 3};
    int A2[4] = {1, 2, 3, 4};
    int A3[5] = {1, 2, 3, 4, 5};
    int A4[6] = {1, 2, 3, 4, 5, 6};
    int* Arr[4];
    Arr[0]= A1;
    Arr[1]= A2;
    Arr[2]= A3;
    Arr[3]= A4;

    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            printf('%d\n', Arr[i][j]);

        }
    }*/
// в дз для малока фри. инче - баллы! free(A
// ptint(int n, ...)- ...-variable arg
