#include <stdio.h>
#include <stdlib.h>

int main(){
    char word[50];
    int ks=0, kg=0;
    printf("enter word:");
    scanf("%s", &word[0]);
      for(int i = 0; word[i] != '\0'; i++) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'y')
            kg++;
        else if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
            ks++;
    }

    printf("Количество гласных: %d\nКоличество согласных: %d", kg, ks);
    return 0;
}