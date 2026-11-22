#include <stdio.h>

int main(void) {
    float peso, altura, imc;
    const char *condicion;

do {
    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);
    if (peso <= 0) { 
        printf("Error: ingrese un numero positivo");
    }
} while (peso <= 0);

do {
    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);
    if (altura < 0) { 
        printf("Error: ingrese un numero mayor a 0");
    }
} while (altura < 0);
    
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
