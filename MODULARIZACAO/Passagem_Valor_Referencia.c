#include <stdio.h>

//Função que dobra o valor (passagem por valor)
void dobrar_valor(int num) {
    num = num * 2; //Aqui, apenas a cópia é modificada
    printf("Dentro da funcao(por valor), o valor dobrado e: %d\n", num);
}

//Função que dobra o valor (passagem por referencia) //Usando um tipo ponteiro (*variavel)
void dobrar_valor_ref(int *num) {
    *num = *num * 2; //Aqui, o valor original é modificado
    printf("Dentro da funcao(por referencia), o valor dobrado e: %d\n", *num);
}

int main() {
    int numero = 10;

    //Passagem por valor
    printf("Antes da funcao (por valor), o numero e: %d\n", numero);
    dobrar_valor(numero);
    printf("Depois da funcao (por valor), o numero e: %d\n", numero);

    //Passagem por referencia
    printf("\nAntes da funcao (por referencia), o numero é: %d\n", numero);
    dobrar_valor_ref(&numero); //Passando por referencia temos que usar o (&), Passando o endereco da variavel
    printf("Depois da funcao (por referencia), o numero e: %d\n", numero);

    return 0;

}