#include <stdio.h>

int main() {
    double peso, altura, imc;

    printf("Ingrese tu peso (kg): ");
    scanf("%lf", &peso);
    printf("Ingrese tu altura (m): ");
    scanf("%lf", &altura);

    imc = peso/(altura * altura);

    if (imc <= 18.4) {
        printf("Bajo peso\n");
    } else if (imc <= 24.9) {
        printf("Normal\n");
    } else if (imc <= 29.9) {
        printf("Sobrepeso\n");
    } else if (imc <= 34.9) {
        printf("Obesidad clase 1\n");
    } else if (imc <= 39.9) {
        printf("Obesidad clase 2\n");
    } else {
        printf("Obesidad clase 3\n");
    }

    return 0;

}
