#include <stdio.h>

// Definição da estrutura para representar livros
typedef struct {
    char titulo[100];
    char autor[100];
    int anoPublicacao;
} Livro;

// Função para preencher uma estrutura Livro com dados obtidos via teclado
Livro preencherLivro() {
    Livro livro;

    printf("Digite o título do livro: ");
    fgets(livro.titulo, sizeof(livro.titulo), stdin);
    livro.titulo[strcspn(livro.titulo, "\n")] = '\0'; // Remove o caractere de nova linha, se presente

    printf("Digite o autor do livro: ");
    fgets(livro.autor, sizeof(livro.autor), stdin);
    livro.autor[strcspn(livro.autor, "\n")] = '\0'; // Remove o caractere de nova linha, se presente

    printf("Digite o ano de publicacao do livro: ");
    scanf("%d", &livro.anoPublicacao);
    getchar(); // Limpa o buffer de entrada

    return livro;
}

int main() {
    Livro livro;

    printf("Preencha os dados do livro:\n");
    livro = preencherLivro();

    printf("\nDados do livro inserido:\n");
    printf("Título: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Ano de Publicação: %d\n", livro.anoPublicacao);

    return 0;
}