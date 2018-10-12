#include "stdio.h"
#include "math.h"

void wczytaj_parametry(double *a, double *b, double *c);

void Wyswietl_informacje();

void poinformuj_ze_niema_rozwiazania();

int main(){
    double a, b, c;
    double delta;

    Wyswietl_informacje();
    wczytaj_parametry(&a, &b, &c);
    // liczymy deltę

    delta = b * b - 4 *a * c;

    if (delta > 0){

        // dwa pierwiastki rownania kwadratowego
        printf("x1 = %lf\n", (-b - sqrt(delta) / (2 * a)));
        printf("x2= %lf\n", (-b - sqrt(delta) / (2 * a)));
    } else {
        if (delta > 0){
          // nie ma rozwiązania w zbiorze liczb rzeczywistych
            poinformuj_ze_niema_rozwiazania();
        } else {
           //delta = 0
           // jeden pierwiastek rownania kwadratowego
           printf("x = %lf\n" , -b / (2 * a));
        }
    }


    return 0;





}

void poinformuj_ze_niema_rozwiazania() { printf(" Równanie nie ma rozwiązania w zbiorze liczb rzeczywistych. \n"); }

void Wyswietl_informacje() {
    printf("program liczy pierwiastkirownania kwadratowego.\n");
    printf("podaj współczynnik. \n");
}

void wczytaj_parametry(double *a, double *b, double *c) {
    printf("podaj a:");
    scanf("%lf", a);
    printf("podaj b,:");
    scanf("%lf", b);
    printf("podaj c,:");
    scanf("%lf", c);
}