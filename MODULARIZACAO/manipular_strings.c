#include <stdio.h>
#include <string.h>

int main(){
    // Declarando strings
    char nome1[50] = "Alana";
    char nome2[] = "Silva";

    // Concatenando strings
    strcat(nome1, nome2);
    printf("Nome completo: %s\n", nome1);

    //Medindo o comprimento da string concatenada
    int comprimento = strlen(nome1);
    printf("Comprimento do nome completo: %s\n", comprimento);

    //Comparando strings
    if (strcmp(nome1, "Alana Silva") == 0) {
        printf("As strings são iguais.\n");
    } else{
        printf("As strings são diferentes.\n");
    }

    // Copiando uma string para outra
    char copia[50];
    strcpy(copia, nome1);
    printf("Copia do nome: %s\n", copia);

    return 0;
}