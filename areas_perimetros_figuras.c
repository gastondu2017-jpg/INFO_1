#include <stdio.h>

#define PI 3.14159265

float calcularAreaRectangulo(float longitud, float altura) {
    return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura) {
    return 2 * (longitud + altura);
}

float calcularAreaCirculo(float radio) {
    return PI * radio * radio;
}

float calcularPerimetroCirculo(float radio) {
    return 2 * PI * radio;
}

void imprimirResultados(float area, float perimetro) {
    printf("El area es: %.2f\n", area);
    printf("El perimetro es: %.2f\n", perimetro);
}

int main(void) {
    int opcion;
    float longitud, altura, radio, area, perimetro;

    do {
        printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo): ");
        scanf("%d", &opcion);

        if (opcion != 1 && opcion != 2) {
            printf("Opcion incorrecta. Ingrese 1 o 2.\n");
        }
    } while (opcion != 1 && opcion != 2);

    switch (opcion) {
        case 1:
            printf("\nOpcion de rectangulo seleccionada\n\n");

            printf("Ingrese la longitud del rectangulo: ");
            scanf("%f", &longitud);

            printf("Ingrese la altura del rectangulo: ");
            scanf("%f", &altura);

            area = calcularAreaRectangulo(longitud, altura);
            perimetro = calcularPerimetroRectangulo(longitud, altura);

            printf("\n");
            imprimirResultados(area, perimetro);
            break;

        case 2:
            printf("\nOpcion de circulo seleccionada\n\n");

            printf("Ingrese el radio del circulo: ");
            scanf("%f", &radio);

            area = calcularAreaCirculo(radio);
            perimetro = calcularPerimetroCirculo(radio);

            printf("\n");
            imprimirResultados(area, perimetro);
            break;
    }

    return 0;
}
