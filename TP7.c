#include <stdio.h>

#define TAM 5

int main(void) {
    int codigos[TAM];
    float precios[TAM];
    int i, indiceMayor, indiceMenor;

    printf("Ingrese %d productos, se solicitara el codigo y precio:\n\n", TAM);

    for (i = 0; i < TAM; i++) {
        do {
            printf("Ingrese el codigo de barras (1-999999999): ");
            scanf("%d", &codigos[i]);

            if (codigos[i] <= 0 || codigos[i] > 999999999) {
                printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
            }
        } while (codigos[i] <= 0 || codigos[i] > 999999999);

        do {
            printf("Ingrese el precio: ");
            scanf("%f", &precios[i]);

            if (precios[i] < 0) {
                printf("Error. El precio no puede ser negativo.\n");
            }
        } while (precios[i] < 0);

        printf("\n");
    }

    // Inicializar indices del mayor y menor con el primer producto
    indiceMayor = 0;
    indiceMenor = 0;

    // Buscar precio mayor y menor
    for (i = 1; i < TAM; i++) {
        if (precios[i] > precios[indiceMayor]) {
            indiceMayor = i;
        }

        if (precios[i] < precios[indiceMenor]) {
            indiceMenor = i;
        }
    }

    // Mostrar lista de productos
    printf("Codigo       Precio\n");
    for (i = 0; i < TAM; i++) {
        printf("%9d  %8.2f\n", codigos[i], precios[i]);
    }

    // Mostrar producto mas caro y mas barato
    printf("\nMas caro: [%d] %.2f\n", codigos[indiceMayor], precios[indiceMayor]);
    printf("Mas barato: [%d] %.2f\n", codigos[indiceMenor], precios[indiceMenor]);

    return 0;
}
