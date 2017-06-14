#include "funcoes.h"

// Função para calcular o maior divisor comum e inteiro
// entre dois numeros positivos.
void maxDivComum(int n1, int n2) {
	
	// Enquanto n1 e n2 não forem iguais o menor inteiro
	// é subtraido do maior inteiro.
	while(n1 != n2) {
        	if(n1 > n2)
            		n1 -= n2;
        	else
            		n2 -= n1;
    	}
	
    printf("Maior Divisor Comum = %d\n",n1);
}
