#include <stdio.h>

int main() {
    float lado1, lado2, area;
    printf("Ingrese el alto en cm: "); 
    scanf("%f", &lado1);
    printf("Ingrese el ancho en cm: "); 
    scanf("%f", &lado2);

    area = lado1 * lado2;

    printf("El área en cm cuadrados es %g\n", area); 

    return 0;
}

