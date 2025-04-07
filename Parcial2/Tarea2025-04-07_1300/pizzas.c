#include <stdio.h>

int main() {
    int vegetariana, clasica, pizzas;
    pizzas = 0;
    clasica = 0;
    vegetariana = 0;
    printf ("Bienvenido a Pizzeria Napoli..." );
    printf ("MENU 1-Pizza Clasica  2-Pizza vegetariana" );
    scanf ("%i",&pizzas);
    if (pizzas == 2) {
        printf("Elija un ingrediente....1-Pimiento 2-Tofu 3-Clasica");
        scanf("%i",&vegetariana);
        if (vegetariana == 1) {
            printf("Los ingredientes de su pizza vegetariana seran: ...Mozarella,tomate y pimiento" );
        } else {
            if (vegetariana == 2) {
                printf("Los ingredientes de su pizza vegetariana seran: ...Mozarella,tomate y tofu" );
            } else {
                if (vegetariana == 3) {
                    printf("Los ingredientes de su pizza vegetariana seran: ...Mozarella y tomate" );
                } else {
                    printf("Error");
                }
            }
        }
    } else {
        printf("Elija un ingrediente...1-Peperoni  2-Jamon 3-Salmon 4-Clasica" );
        scanf("%i",&clasica);
        if (clasica == 1) {
            printf("Los ingredientes de su pizza seran: ...mozzarella,tomate y peperoni " );
        } else {
            if (clasica == 2) {
                printf("Los ingredientes de su pizza seran: ...mozzarella,tomate y jamon " );
            } else {
                if (clasica == 3) {
                    printf("Los ingredientes de su pizza seran: ...mozzarella,tomate y salmon " );
                } else {
                    if (clasica == 4) {
                        printf("Los ingredientes de su pizza seran: ...mozzarella y tomate " );
                    } else {
                        printf( "Error");
                    }
                }
            }
        }
    }
    return 0;
}
