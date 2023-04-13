#include <stdio.h>
#include <stdlib.h>

#define ROWS 2
#define COLUMNS 2

int main() {
    int twoArr[][2] = { {1,2},{3,4} }; //Строки столбцы


    /*for(int i=0; i < 2; i++){
        for(int j=0; j < 2; j++){
            printf("twoArr[%d][%d] = %d\n",i, j, twoArr[i][j]);
        }
    }*/
    printf("\nOne loop:\n");
    int i=0, j=0;
    int twoArr1[3][4] = {1,2,3,4,5,6,7,8,9};  
    int* ptr;
    for( ptr = &twoArr[0][0]; ptr<= &twoArr[2][3]; ptr++ ){
        printf("twoArr[%d][%d] = %d\n",i, j, twoArr[i][j]);
        j++;
        if (j==4){
            i++;
            j=0;
        }
    }

    return 0;
}