#include <stdio.h>
#include <stdlib.h>

void kocka(double x, double *felulet, double *terfogat) {
    *felulet = 6*x*x;
    *terfogat = x*x*x;
}

int main() {
    double x = 10;
    double terfogat,felulet;
    kocka(x, &terfogat, &felulet);
    printf("X:%f\nFelulet:%f\nTerfogat:%f", x,felulet,terfogat);
    return 0;
}