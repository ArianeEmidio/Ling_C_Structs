#include <stdio.h>
#include <ctype.h> // Biblioteca para funções de manipulação de caracteres

int main(){
    char texto[] = "Programacao123";
    int i = 0;

    //Percorrendo cada caractere da string
    while (texto[i]) {
        //Verficando se é uma letra:
        if (isalpha(texto[i])) {
            printf("%c - uma letra.\n", texto[i]);

            //Transformando em maiuscula se for minuscula
            if (islower(texto[i])) {
                texto[i] = toupper(texto[i]);
                printf("Convertido para maiusculo: %c\n", texto[i]);
            }
        }
        //Verificando se é um numero:
        else if (isdigit(texto[i])) {
            printf("%c - um numero.\n", texto[i]);
        }
        i++; //Contabilizar o incremento do texto[i] para percorrer a string
    }
    printf("Texto transformado: %s\n", texto);

    return 0;
}