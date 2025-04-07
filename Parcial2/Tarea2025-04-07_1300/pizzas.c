#include <stdio.h>
int main(){
  int pizzas,veg,clas;
  printf("Bienvenido a pizzeria napoli \n Menu...\n1-Pizza clasica \n 2-Pizza vegetariana");
  scanf("%i",&pizzas);
  if(pizzas==1){
    printf("Elija un ingrediente...\n1-Peperoni \n2-Jamon \n3-Salmon \n4-Clasica(tomate y mozzarella");
  } 
  if (clas=1){
    printf("Su pizza sera con: Mozarrella,Tomate y Peperoni");
  } else if (clas=2){
        printf("Su pizza sera con: Mozarrella,Tomate y Jamon");
  } else if (clas=3){
   printf("Su pizza sera con: Mozarrella,Tomate y Salmon");
  } else if (clas=3){
    printf("Su pizza sera con: Mozarrella y Tomate");
  }else {
    printf("Error");
  }
   if (pizzas=2){
    printf("Elija un ingrediente de su pizza vegetariana...\n1-Pimiento \n2-Tofu \n3-Clasica(Tomate y Mozzarella");
   }
   if (veg=1){
    printf("Su pizza vegetariana sera de: Tomate ,Mozarrella y Pimiento ");
   }else if (veg=2){
    printf("Su pizza vegetariana sera de: Tomate ,Mozarrella y Tofu ");
   }else if (veg=3){
    printf("Su pizza vegetariana sera de: Clasica(Tomate y Mozzarella) ");
   }else{
    printf("Error");
   }
   
    return 0;
}