#define _CRT_SECURE_NO_WARNINGS // для возможности использования scanf
#include <stdio.h>
#include  <stdlib.h>
//#include <locate.h>

int Bissectrice(double, double);
int Vertical(double, double);
int Horizontal(double, double);

int main() {
    double x;
    system("chcp 1251"); // переходим в консоли на русский язык
    system("cls");       // очищаем окно консоли
    printf("Введите x: "); // выводим сообщение
    scanf("%f", &x);     // вводим значения переменной x

    double y;
    printf("Введите : "); // выводим сообщение
    scanf("%f", &y);     // вводим значения переменной y
    /*
#зона 1
    double x = 3.;
    double y = 4.;
#зона 2
    double x = 4.;
    double y = -5.;
#зона 3
    double x = -5.;
    double y = 3.;
#зона 4
    double x = -2.;
    double y = 1.;
#зона 5
    double x = -4.;
    double y = -4.;
#зона 6
    double x = 1.;
    double y = -4.;
#зона 7
    double x = 1.;
    double y = 1.;
#зона 8
    double x = 7.;
    double y = 1.;
#зона 9
    double x = 1.;
    double y = 1.;
#зона 10
    double x = 5.;
    double y = 5.;
//зоны я отдельно на скрине подписала
    */
    printf("%lf", ((Vertical(x,y) && Horizontal(x,y))|| Bissectrice(x,y)));
    printf("%lf", (Circle(x,y)));
    return 0;
}

int Bissectrice(double x, double y){
    int result = -1;
    result = (y <= -x) * (x < 4) * (y < 3);

    return result;
}

int Vertical(double x, double y){
    int result = -1;
    result = (x > 4);

    return result;
}

int Horizontal(double x, double y){
    int result = -1;
    result = (y > 3);

    return result;
}

int Circle(double x, double y){
    int result = -1;
    if (((x*x + y*y >= 25) && (x<=5)) && (y<=5)){
        if ((x>=0)&&(y>=0)){
            result = 1;
            
        }
    }
    else{
        result = 0;
    }

     return result;
}
/*
input data: x,y
output: 1,0

*/