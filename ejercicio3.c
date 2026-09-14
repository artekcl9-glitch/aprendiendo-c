#include <stdio.h>

int main(){
    int x,f,y;

    printf("Indique la temperatura usada para la convercion:\n");
    printf("\n1.Fahrenheit\n2.Celcius\n");
    scanf("%i",&x);

    switch(x){
        case 1: printf("Indique porfavor la temperatura: ");
        scanf("%i",&f);break;
        case 2: printf("Indique porfavor la temperatura: ");
        scanf("%i",&c);break;
    }switch
}
