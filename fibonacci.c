#include "funcoes.h"

void fibonacci(int valor) {
	int numero1 = 1, numero2 = 1, proxNumero;
	int i;
	
  	printf("%d %d", numero1, numero2);

	for(i=3; i<=valor; i++) {
		proxNumero = numero1 + numero2;
		printf(" %d", proxNumero);
		
		numero1 = numero2;
		numero2 = proxNumero;
	}
	
	printf("\n");
}
