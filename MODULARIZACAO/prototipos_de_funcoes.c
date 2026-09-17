#include <stdio.h>

//Protótipos das funções
float calcular_area_circulo(float raio);
int calcular_area_retangulo(int largura, int altura);

int main() {
    float raio = 5.0;
    int largura = 4;
    int altura = 6;

    //Chamando as funções antes de suas definições comletas
    printf("Area do circulo: %.2f\n", calcular_area_circulo(raio));
    printf("Area do retangulo: %d\n", calcular_area_retangulo(largura, altura));

    return 0;
}