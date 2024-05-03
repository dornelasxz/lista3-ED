#include <stdio.h>
#include <stdlib.h>

// Função para converter um valor real em sua representação monetária
char* monet(double v) {
    char *monetario = (char*)malloc(20 * sizeof(char)); // Aloca memória para a string de representação monetária
    if (monetario == NULL) {
        printf("Erro: Falha ao alocar memória.\n");
        exit(1);
    }

    // Formata o valor real na representação monetária desejada
    sprintf(monetario, "R$ %.2lf", v);

    return monetario;
}

int main() {
    double valor;

    // Solicita ao usuário que insira um valor real
    printf("Digite um valor real: ");
    scanf("%lf", &valor);

    // Chama a função monet para obter a representação monetária do valor inserido
    char *representacao = monet(valor);

    printf("Representacao monetaria: %s\n", representacao);

    // Libera a memória alocada para a representação monetária
    free(representacao);

    return 0;
}