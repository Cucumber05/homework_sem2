#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <cmath>
#define PI 3.14159265 
#define PI 3.14159265 
int main() {
    int ra1 = 60000; //km
    int ra2 = 45000;
    int step = 10; 
    double mu = 398600.4;
    double we = (7.2921159* 0.00001);
    double param = 63.4;
    double rp = ((pow(we, 2)*pow(ra2, 4)* pow(cos(param * PI / 180), 2) )/(2*mu- pow(we, 2)*pow(ra2, 3)* pow(cos(param * PI / 180), 2) ));
	
    for (int i =0; i<=ra1; i+=step){


    }
    FILE* file = fopen("n1.txt", "w"); // file lkz pfgbcb d ytuj
	
	fprintf(file, "то что записать\n");
	fclose(file);
	return 0;
}