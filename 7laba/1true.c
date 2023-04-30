#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_word_lenght 20
void Bubble_sort(char words[][max_word_lenght]);

int main(){
    char words[10][max_word_lenght];
    int i, j;
    printf("Enter 10 words:\n");
    for (i=0; i<10; i++){
        printf("%d:", i+1);
        scanf("%s", words[i]);
    }
    
    Bubble_sort(words);

    printf("sorted array:\n");
    for (i=0; i<10; i++){
        printf("%s\n", words[i]);
    }
    return 0;

}

void Bubble_sort(char words[][max_word_lenght]){
    int i, j;
    char temp[max_word_lenght];
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            if(strcmp(words[j], words[j+1])>0){
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);

            }

        }
    }

}