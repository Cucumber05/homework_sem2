#include <stdio.h>
#include <stdlib.h>
#define arena_size 30
char** createArena(){
    char** arena = calloc(arena_size, sizeof(char));

    for (int i=0; i< arena_size; i++){
        arena[i] = calloc(arena_size, sizeof(char));
        /*for (int i=0; i< arena_size; i++){
            for (int j=0; j< arena_size; j++){
            }
        }*/
    }
}


void DrawArena(char** arena){
    for (int i=0; i< arena_size; i++){
        for (int j=0; j< arena_size; j++){
            printf("%c", arena[i][j]);
        }
        pritnf("\n");
    }
}
int main(){
    char** a = createArena();
    printf("start od string\n");
    DrawArena(a);
}