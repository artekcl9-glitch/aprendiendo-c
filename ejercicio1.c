#include <stdio.h>

int main(){
	int x,y,z;

	printf("Indique el valor de x: ");
	scanf("%i",&x);

	printf("Indique el valor de y: ");
	scanf("%i",&y);

	z = x+y;
	printf("La suma de x + y es: %i\n",z);

	z = x-y;
	printf("La resta de x - y es: %i\n",z);

	z = x*y;
	printf("La multiplicacion de x * y es: %i\n",z);

	z = x/y;
	printf("La divicion de x / y es: %i\n",z);

	z = x%y;
	printf("El restante de x % y es: %i\n",z);

	getchar();
	return 0;
}
