#include <stdio.h>

int main() {
    int opc1, opc2;
    int pizza;
    int ingrediente;

    printf("Pizzeria Bella Napoli: ");
    printf("Escoja su tipo de pizza:\n1-Vegetariana\n2-No vegetariana\n");
    scanf("%d", &opc1);

    if (opc1 == 1) {
        pizza = 1;
        printf("Escoge un ingrediente:\n1-Pimiento\n2-Tofu\n");
        scanf("%d", &opc2);

        if (opc2 == 1 || opc2 == 2) {
            ingrediente = opc2;
     } else {
            printf("Opcion no valida\n");
            return 1;
        }
        } else if (opc1 == 2) {
        pizza = 2;
        printf("Escoge un ingrediente:\n1-Peperoni\n2-Jamon\n3-Salmon\n");
        scanf("%d", &opc2);

        if (opc2 >= 1 && opc2 <= 3) {
            ingrediente = opc2;
        } else {
            printf("Opcion no valida\n");
            return 1;
        }
    } else {
        printf("Opcion no valida\n");
        return 1;
    }

    printf("Pizza %s\nIngredientes: Tomate, Mozzarella y ", pizza == 1 ? "Vegetariana" : "No vegetariana");
    if (ingrediente == 1) {
        printf("Pimiento\n");
    } else if (ingrediente == 2) {
        printf("Tofu\n");
    } else if (ingrediente == 3) {
        printf("Peperoni\n");
    } else if (ingrediente == 4) {
        printf("Jamon\n");
    } else if (ingrediente == 5) {
        printf("Salmon\n");
    }

    return 0;
}
