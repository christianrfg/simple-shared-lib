#include "funcoes.h"

void palindromo(char* str) {
    // Comeca do comeco e final da string str
    int l = 0;
    int h = strlen(str) - 1;
 
    // Continua comparando enquanto os char sao os mesmos
    while (h > l) {
        if (str[l++] != str[h--]) {
            printf("%s não é um palindromo.\n", str);
            return;
        }
    }

    printf("%s é um palindromo.\n", str);
}

