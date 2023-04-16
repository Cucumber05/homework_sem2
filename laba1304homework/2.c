#include <stdio.h>
#include <stdlib.h>


void Bubu(int arr[10][20], int numb, int row, int column );
int main()
{
    int row=10, column=20, numb=0;
    /*scanf("Enter count of row:%d", &row);
    scanf("Enter count of column:%d", &column);*/
    int arr[10][20];
    for (int i=0; i<row; i++){
        for (int j=0; j<column; j++){
            srand(42);
            for (int z = 0; z < 10;z++) {
                arr[i][j] == rand();
            }
        }
    }
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 20; j++) {
            printf("%d ", arr[i][j]);
    }
    printf("\n");
} 
    printf("Enter number, that u want to find:");
    scanf("%d", &numb);
    Bubu(arr, numb, row, column);
    
    return 0;
}

void Bubu(int arr[10][20], int numb, int row, int column){
    int f=1;
        for (int i=0; i< row; i++){
            for (int j=0; j< column; j++){
                if (arr[i][j]== numb){
                    printf("row:%d, column:%d \n", i+1, j+1);
                    f=0;
                    break;
                }
            }
        }
        if (f==1){
            printf("i didnt found here :(");
        }
}