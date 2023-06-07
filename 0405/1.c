#include <stdio.h>
#include "add.h"

extern int var_from_h;
int main(){
    printf("%i", var_from_h);
}