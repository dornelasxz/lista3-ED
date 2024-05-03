#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strsub(const char *s, int i, int n) {
    // Aloca memória para a substring
    char *substring = (char*)malloc((n + 1) * sizeof(char)); // Adiciona 1 para o caractere nulo '\0' no final
    if (substring == NULL) {
        printf("Erro: Falha ao alocar memoria.\n");
        exit(1);
    }

    // Copia os caracteres da substring de s para a nova substring
    strncpy(substring, s + i, n);
    substring[n] = '\0'; // Adiciona o caractere nulo '\0' ao final da substring

    return substring;
}

int main() {
    char s[100]; // Supomos que a string tenha no máximo 100 caracteres
    int i, n;

    // Solicita ao usuário que insira uma string
    printf("Digite uma string: ");
    scanf("%s", s);

    // Solicita ao usuário que insira a posição inicial da substring
    printf("Digite a posicao inicial da substring: ");
    scanf("%d", &i);

    // Solicita ao usuário que insira o número máximo de caracteres na substring
    printf("Digite o numero maximo de caracteres na substring: ");
    scanf("%d", &n);

    // Chama a função strsub para obter a substring de s
    char *substring = strsub(s, i, n);

    // Imprime a substring
    printf("Substring de s: %s\n", substring);

    // Libera a memória alocada para a substring
    free(substring);

    return 0;
}