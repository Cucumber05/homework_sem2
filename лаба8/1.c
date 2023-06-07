#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <cmath>
#define PI 3.14159265 
 
int main() {
    double ra1 = 60000.0; //km
    double ra2 = 45000.0;
    double step = 10.0; 
    double mu = 398600.4;
    double we = (7.2921159*0.00001);
    double param = 63.4;
    double va, vw, ra;
    double max_distance = 0; // максимальное расстояние между точками va и vw
    double max_ra = 0; // радиус, на котором достигается максимальное расстояние
    double rp = ((pow(we, 2)*pow(ra2, 4)* pow(cos(param * PI / 180), 2) )/(2*mu- pow(we, 2)*pow(ra2, 3)* pow(cos(param * PI / 180), 2) ));
	FILE* file = fopen("n1.txt", "w"); // file для записи в него

    for (double ra =0; ra<=ra1; ra+=step){ 
        va = sqrt((2 * mu * rp) / (ra * (ra + rp))); // формула для va
        vw = we * ra * (cos(param * PI / 180)); // формула для vw
        fprintf(file, "%.1f, %.8f, %.8f\n", ra, va, vw);
        if (vw >= va) {
                break; // выход из цикла, если vw больше или равно va
            }
        if(fabs(va - vw) < 1e-8) { // (10**-8)если значения совпадают (с точностью до 8 знаков после запятой)->точка пересечения
            printf("точка пересечения: ra = %.1f\n", ra);
            break;
        }

        if(fabs(va - vw) > max_distance) { // находим максимальное расстояние между точками
            max_distance = fabs(va - vw);
            max_ra = ra;
        }
    }

    printf("максимальное расстояние: %.8f (ra = %.1f)\n", max_distance, max_ra);
	fclose(file);
	return 0;
}

