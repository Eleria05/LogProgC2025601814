#include <stdio.h>

int main(){
    float kg,m ,IMC;

    printf("Inserte su peso");
    scanf("%f",&kg);

    printf("Inserte su estatura en metros");
    scanf("%f",&m);

    IMC=kg/(m*m);
        printf("El estado en el que se encuentra es %.2f\n ",IMC);
     if (IMC >=40.0) {
        printf("Obesidad Clase 3");
        } else if(IMC >=35.0) {
        printf("Obesidad Clase 2");
        } else if (IMC >=30.0){
        printf("Obesidad Clase 1");
        } else if (IMC >=25.0){
        printf("Sobrepeso");
        } else if (IMC >=18.5){
        printf("Normal");
        } else if (IMC <18.4){
        printf("Bajo Peso");
        }else {
              printf("Error");
        }
         
    return 0;
}