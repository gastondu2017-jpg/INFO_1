#include <stdio.h>

int main(void) {
    float peso, altura, imc;
    const char *condicion;

    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        condicion = "Bajo peso";
    } else if (imc < 25.0) {
        condicion = "Normal";
    } else if (imc < 30.0) {
        condicion = "Sobrepeso";
    } else {
        condicion = "Obesidad";
    }

    printf("\nSu indice de masa corporal es: %.2f\n\n", imc);

    printf("    Indice     | Condicion\n");
    printf("-----------------------------\n");
    printf("    <18.5      | Bajo peso\n");
    printf(" 18.5 a 24.9   | Normal\n");
    printf(" 25.0 a 29.9   | Sobrepeso\n");
    printf("    >=30       | Obesidad\n");

    printf("\nUsted se encuentra en la condicion: %s\n", condicion);

    return 0;
}
