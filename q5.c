#include <stdio.h>

int strlen_custom(const char *s) {
    const char *inicio = s; // Ponteiro para o início da string

    // Percorre a string até encontrar o caractere nulo '\0'
    while (*s != '\0') {
        s++; // Avança para o próximo caractere
    }

    // Calcula o número de caracteres contando a diferença entre os ponteiros
    return s - inicio;
}

int main() {
    char str[100]; // Supomos que a string tenha no máximo 100 caracteres

    printf("Digite uma string: ");
    scanf("%s", str); // Lê a string do usuário

    int tamanho = strlen_custom(str); // Calcula o tamanho da string

    printf("O tamanho da string e: %d\n", tamanho);

    return 0;
}