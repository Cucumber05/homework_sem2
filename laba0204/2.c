#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

bool testInput(double x);
int  strToInt(double x);
int getInput();

int main()
{
    x=1.2
bool testInput(double x){
    bool result = false;
    if (int(x)==x){
        result= true;
    }
    return result;
}

int strToInt(double x){
    return int(x);
}


int getInput(){
char a[];
  system("chcp 1251"); 
  system("cls");       
  printf("Введите: "); 
  scanf("%f", &a);     
  printf("Вы ввели: %s", a); 
  getchar(); getchar();
  return 0;
}
  

}