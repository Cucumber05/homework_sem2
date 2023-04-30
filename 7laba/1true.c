#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define max_word_lenght 20
void swap(char *a, char *b);
void Output(char words[][max_word_lenght]);
void Bubble_sort(char words[][max_word_lenght]);
void Comb_sort(char words[][max_word_lenght]);
void Selection_sort(char words[][max_word_lenght]);

int main(){
    clock_t start = clock();
    char words[10][max_word_lenght],words2[10][max_word_lenght], words3[10][max_word_lenght] ;
    int i, number;
    printf("Enter 10 words:\n");
    for (i=0; i<10; i++){
        printf("%d:", i+1);
        scanf("%s", words[i]);
    }
    
    for (int i=0; i<10; i++){
        words2[i][max_word_lenght]= words[i][max_word_lenght];
    }
    for (int i=0; i<10; i++){
        words3[i][max_word_lenght]= words[i][max_word_lenght];
    }
    printf("Which sort you would like?:\n1: Bubble sort\n2: Selection sort\n3: Comb sort\n4: all sorts\n(enter only a number)");
    scanf("%d", &number);
    Bubble_sort(words);
    Output(words);
    Selection_sort(words2);
    Output(words2);
    Comb_sort(words3);
    Output(words3);
            
    switch (number){
        case 1: 
            Bubble_sort(words);
            Output(words);
            clock_t end = clock();
            double cpu_time_used = ((double) (end-start)) - CLOCKS_PER_SEC;
            printf("Tme used function:%f sec\n", cpu_time_used);
            break;

        case 2: 
            Selection_sort(words);
            Output(words);
            break;

        case 3: 
            Comb_sort(words);
            Output(words);
            break;
            
        case 4:
            Bubble_sort(words);
            Output(words);
            Selection_sort(words2);
            Output(words2);
            Comb_sort(words3);
            Output(words3);
            break;
        
        default:
            printf("I didnt understand what did you mean");
            break;

    }
    

    
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
    for (i=0; i<9; i++){
        mini = i;
        for (j=i+1; j<10; j++){ 
            if(strcmp(words[j], words[mini])<0){
                mini=j;
            }
        }
        if (mini!=i){
                swap(words[i], words[mini]);
            }
    }
}


