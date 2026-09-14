#include <stdio.h>

int main(){
    int x;
    float c,f;

    printf("Indique la temperatura usada para la convercion:\n");
    printf("\n1.Fahrenheit\n2.Celcius\n");
    scanf("%i",&x);

    switch(x){
        case 1: printf("Indique porfavor la temperatura: ");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("La temperatura en Celcius es de: %f\n",c);break;
        case 2: printf("Indique porfavor la temperatura: ");
        scanf("%f",&c);
        f=(c*9/5)+32;
        printf("La temperatura en Fahrenheir es de: %f\n",f);break;
        default: printf("Hola, lo que pusiste esta mal\n");
    }

    getchar();
    return 0;
}
