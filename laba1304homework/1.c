#include <stdio.h>
#include <stdlib.h>


int main(){
    char word[20]; //a string from the user (for example 'qwerlluioasdfghjllll')
    char symbol[1]; //symbol that user would like to check
    int k = 0;
    printf("Введите строку (20 символов): ");
    scanf("%s",word); //the string entered from the user
    printf("Какой символ проверить?: ");
    scanf("%s",symbol); //user enter a symbol
    
    //the loop runs through each character of the string
    for(int i=0; i<20; i++){
        if (word[i] == symbol[0]){
            k++;
        }
        else{
            k=0;
        }
    }
    printf("Максимальная последовательность символа %s: %d", symbol, k); //output data

    return 0;

}