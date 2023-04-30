///не то!!!!










#include <stdio.h>
#include <stdlib.h>


void Bubble_sort(char *word);

int main()
{
    char word[10];
    int n =10, position, swap, k;
    printf("");
    for(int i =0; i<=10; i++){
        scanf("/s", word[i]);
    }

    for(int i = 0; i < n; i++)
        printf("%d ", word[i]);

    Bubble_sort(word[]);
    /*
    //Selection Sort
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n - 1; i++){
        position = i;
        for(int j = i + 1; j < n; j++){
            k++;
            if(a[position] > a[j])
                position=j;
            }
            if(position != i){
                swap=a[i];
                a[i]=a[position];
                a[position]=swap;
            }
    }
    printf("Selection Sorted Array:");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nk=%d", k); //number of itarations


    //Bubble sort


    printf("\n Bubble Sorted list:\n");

    for (int c = 0; c < n; c++)
        printf("%d ", a[c]);
    printf("\nk=%d", k); //number of itarations*/
    return 0;

}

void Bubble_sort(char *word){
    int * a;
    for(int i =0; i<10; i++){
        if (strcmp(word[i], word[i+1])>0){
            a= &word[i];
            &word[i] = &word[i+1];
            &word[i+1] = a;


        }
    }

}
