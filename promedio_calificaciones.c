#include <stdio.h>

int main(void) {
    int cantidad, i;
    float calificacion, suma = 0, promedio;
    float mayor, menor;

    // Validar que la cantidad de estudiantes sea positiva
    do {
        printf("Ingrese la cantidad de estudiantes: ");
        scanf("%d", &cantidad);

        if (cantidad <= 0) {
            printf("Error: la cantidad debe ser un numero positivo.\n");
        }
    } while (cantidad <= 0);

    // Ingresar y validar calificaciones
    for (i = 1; i <= cantidad; i++) {
        do {
            printf("Ingrese la calificacion del estudiante %d (0 a 100): ", i);
            scanf("%f", &calificacion);

            if (calificacion < 0 || calificacion > 100) {
                printf("Error: la calificacion debe estar entre 0 y 100.\n");
            }
        } while (calificacion < 0 || calificacion > 100);

        suma += calificacion;

        // Inicializar mayor y menor con la primera calificacion
        if (i == 1) {
            mayor = calificacion;
            menor = calificacion;
        } else {
            if (calificacion > mayor) {
                mayor = calificacion;
            }
            if (calificacion < menor) {
                menor = calificacion;
            }
        }
    }

    promedio = suma / cantidad;

    printf("\nPromedio de calificaciones: %.2f\n", promedio);
    printf("Calificacion mas alta: %.2f\n", mayor);
    printf("Calificacion mas baja: %.2f\n", menor);

    return 0;
}
