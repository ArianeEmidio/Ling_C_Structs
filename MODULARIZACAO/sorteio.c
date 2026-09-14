#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int sorteio = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100
    printf("O numero sorteado foi: %d\n", sorteio);
    return 0;
}