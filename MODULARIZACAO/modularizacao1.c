#include <stdio.h>

//Função para calcular o valor do desconto
float calcularDesconto(float preco, float percentual){
    return preco * (percentual / 100);
}

//Procedimento para exibir o valor total com desconto
void exibirTotal(float preco, float desconto){
    float total = preco - desconto;
    printf("O valor final com desconto: %.2f\n\n", total);
}

int main(){
    float preco, percentualDesconto, desconto;

    //Solicita o preco e o percentutal de desconto ao usuario
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentualDesconto);

    //Chama a função para calcular o desconto
    desconto = calcularDesconto(preco, percentualDesconto);

    //Chama o procedimento para exibir o total com desconto
    exibirTotal(preco, desconto);

    return 0;
}