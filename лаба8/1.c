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
    double we = (7.2921159* 0.00001);
    double param = 63.4;
    double va, vw;
    double rp = ((pow(we, 2)*pow(ra2, 4)* pow(cos(param * PI / 180), 2) )/(2*mu- pow(we, 2)*pow(ra2, 3)* pow(cos(param * PI / 180), 2) ));
	FILE* file = fopen("n1.txt", "w"); // file для записи в него

    for (double i =0; i<=ra1; i+=step){  // i= ra
        va = sqrt((2 * mu * rp) / (i * (i + rp))); // формула для va
        vw = we * i * (cos(param * PI / 180)); // формула для vw
        fprintf(file, "%.2lf\t%.4lf\n", va, vw);
        if (vw >= va) {
                break; // выход из цикла, если vw больше или равно va
            }
    }
	fclose(file);
	return 0;
}

