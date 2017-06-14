#include "funcoes.h"

// Verifica se um número n é primo ou não
// Um número é primo se ele eh somente divisivel por ele mesmo e por 1
void numeroPrimo(int n) {
    int i, aux = 1;

    for(i=2; i <= n/2; ++i) {
    	// Condição para número não primo
        if(n%i == 0) {
            aux = 0;
            break;
        }
    }
    
    if(aux == 1)
	printf("O número é primo.\n");
    else
	printf("O número não é primo.\n");
}

