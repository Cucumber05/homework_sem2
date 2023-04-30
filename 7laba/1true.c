#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_word_lenght 20
void swap(char *a, char *b);
void Output(char words[][max_word_lenght]);
void Bubble_sort(char words[][max_word_lenght]);
void Comb_sort(char words[][max_word_lenght]);
void Selection_sort(char words[][max_word_lenght]);

int main(){
    char words[10][max_word_lenght];
    int i, j;
    printf("Enter 10 words:\n");
    for (i=0; i<10; i++){
        printf("%d:", i+1);
        scanf("%s", words[i]);
    }
    
    Bubble_sort(words);

    Output(words);
    return 0;

}
void swap(char *a, char *b){
    char temp[max_word_lenght];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}
void Output(char words[][max_word_lenght]){
    printf("sorted array:\n");
    for (int i=0; i<10; i++){
        printf("%s\n", words[i]);
    }
}

void Bubble_sort(char words[][max_word_lenght]){
    int i, j;
    char temp[max_word_lenght];
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            if(strcmp(words[j], words[j+1])>0){
                swap(words[j], words[j+1]);
            }
        }
    }
}

void Comb_sort(char words[][max_word_lenght]){
    int g=10;
    float shrink =1.3;
    int sorted=0;
    while (!sorted){
        g= (int)(g/shrink);
        if (g<=1){
            g=1;
            sorted=1;
        }
        int i =0;
        while(i+g<10){
            if(strcmp(words[i], words[i+g])>0){
                swap(words[i], words[i+g]);
                sorted=0;
            }
            i++;
        }
    }
}

void Selection_sort(char words[][max_word_lenght]){
    int i, j, mini;
    for (i=0; i<10; i++){
        mini = i;
        for (j=0; j<10; j++){ 
            if(strcmp(words[j], words[j+1])<0){
                mini=j;
            }
            swap(words[i], words[mini]);
        }
    }
}