#include <stdio.h>

// Função para exibir uma string no vídeo e mudar o cursor de linha
void puts(char *s) {
    // Percorre a string até encontrar o caractere nulo de término da string
    while (*s != '\0') {
        printf("%c", *s); // Imprime o caractere atual
        s++; // Avança para o próximo caractere da string
    }
    printf("\n"); // Muda o cursor de linha após exibir a string completa
}

int main() {
    char minhaString[] = "Exemplo de string";

    // Chama a função puts para exibir a string e mudar o cursor de linha
    puts(minhaString);

    return 0;
}