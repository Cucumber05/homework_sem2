#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
//dynamic
void print_array(int n, int* a);
int* append_to_array(int n, int newnum, int* a);
void insert_in_array(int* a, int n, int newnum, int pos );

int main(){
    int *a;  //Pointer to array
    int i, n, newnum, pos;
    printf("Enter array elements: ");
    scanf("%d", &n);
    //Memory Allocation
    a = (int*)malloc(n * sizeof(int));
    //Entering array elements
    for (i = 0; i<n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    print_array(n, a);
// закоментировала(это аппенд) и функцию саму, потому что там ошибка с реалоком, просит тип вроде другой, скажите пожалуйста, что делать
    /*printf("Enter new number(to append to array):");
    scanf("%d", &newnum);
    printf("Now array looks like:\n");
    print_array(n, append_to_array(n, newnum, a));*/

    printf("Enter new number(to insert to array):");
    scanf("%d", &newnum);
    printf("Enter position for new number:(<=%d)" ,n);
    scanf("%d", &pos);
    insert_in_array(a, n, newnum, pos);



    return 0;
}

void print_array(int n, int* a){
    printf("Array:\n");
    for (int i = 0; i<n ; i++){
        printf("%d ", a[i]);
    } 
}

int* append_to_array(int n, int newnum, int* a){
    /*
    int* new_arr = realloc(a, (n++) * sizeof(int)); //не понимаю что не так, выдает ошибку тут 
    if(new_arr == NULL){
        printf("Error: out of memory\n");
        return NULL;
    }
    new_arr[n] = newnum;                                          
    return new_arr;
*/
}


void insert_in_array(int* a, int n, int newnum, int pos ){
    n++;
    // shift elements forward
    for (int i = n - 1; i >= pos; i--)
        a[i] = a[i - 1];
 
    a[pos - 1] = newnum;
 
    // print the updated array
    print_array(n, a);

}


/*insert
input: arr = 1 2 3 4 5, newnum = 7, pos = 8
ountput: 1 2 3 4 5 0
если ввести позицию элемента > на 1 текущего кол-ва эл-ов, то создатся новый нулевой элемент и все

input: arr = 1 2 3 4 5, newnum = 0, pos = 1
ountput: 0 1 2 3 4 5
проверка первого места

input: arr = 1 2 3 4 5, newnum = 6, pos = 6
ountput: 1 2 3 4 5 6
проверка последнего места


*append
input: arr = 1 2 3 4 5, newnum = 7
ountput: 1 2 3 4 5 7
проверка 


*/ 