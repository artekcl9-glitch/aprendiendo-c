#include <stdio.h>
#define PI 3.14159265

int main(){
	int r;
	double re;
	char esp;

	printf("Por favor indique el valor de radio: ");
	scanf("%i",&r);

	printf("indique que quiere calcular:\n1.-Area=A\n2.-Perimetro=P \n");
	scanf(" %c",&esp);

	if(esp == 'A'){
		re = PI*(r*r);
		printf("El Area del circulo es: %f\n",re);
	}else if(esp == 'P'){
		re = 2*PI*r;
		printf("El Perimetro del circulo es: %f\n",re);
	}

	getchar();
	return 0;
}
