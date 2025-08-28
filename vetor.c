#include <stdio.h>

int main() {
    int valores[10]; // Vetor para armazenar os valores
    int i, maior;

    // Entrada de dados
    printf("Digite 10 valores:\n");
    for(i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Inicializa o maior valor com o primeiro elemento do vetor
    maior = valores[0];

    // Encontra o maior valor
    for(i = 1; i < 10; i++) {
        if(valores[i] > maior) {
            maior = valores[i];
        }
    }

    // Exibe o maior valor
    printf("O maior valor é: %d\n", maior);

    return 0;
}
