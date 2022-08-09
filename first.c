#include <stdio.h>

int main() {

    float fah, cen;

    printf("Enter the Fahneherit Tempreature: ");
    scanf("%f", &fah);

    cen = (fah - 32) * 5/9;
    printf("Centrigrade: %f\n", cen);
    return 0;
}