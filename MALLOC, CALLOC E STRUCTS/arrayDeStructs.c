#include <stdio.h>
#include <string.h>

#define NUM_PRODUTOS 5

struct Produto {
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
};

int main (){
    int i;
    struct Produto produtos[NUM_PRODUTOS];

    //Prencher os dados dos produtos
    strcpy(produtos[0].nome, "Camiseta");
    produtos[0].codigo = 101;
    produtos[0].quantidade = 50;
    produtos[0].preco = 29.99;

    strcpy(produtos[1].nome, "Calca Jeans");
    produtos[1].codigo = 102;
    produtos[1].quantidade = 30;
    produtos[1].preco = 79.99;

    strcpy(produtos[2].nome, "Tenis Esportivo");
    produtos[2].codigo = 103;
    produtos[2].quantidade = 20;
    produtos[3].preco = 199.99;

    strcpy(produtos[3].nome, "Bolsa de Couro");
    produtos[3].codigo = 104;
    produtos[3].quantidade = 15;
    produtos[3].preco = 149.99;

    strcpy(produtos[4].nome, "Oculos de Sol");
    produtos[4].codigo = 105;
    produtos[4].quantidade = 10;
    produtos[4].preco = 89.99;

    //Exibindo os dados dos produtos
    printf("\n=== Estoque de Produtos ===\n\n");
    for (i = 0; i < 5; i++) {
        printf("Produto %d: \n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Codigo: %d\n", produtos[i].codigo);
        printf("Quantidade; %d\n", produtos[i].quantidade);
        printf("Preco: R$ %.2f\n\n", produtos[i].preco);
    }
    return 0;
}