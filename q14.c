#include <stdio.h>

// Definição da estrutura para representar livros
typedef struct {
    char titulo[100];
    char autor[100];
    int anoPublicacao;
} Livro;

// Função para preencher uma tabela de livros com dados obtidos via teclado
void preencherTabelaLivros(Livro *tabela, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Preencha os dados do livro %d:\n", i + 1);

        printf("Digite o título do livro: ");
        fgets(tabela[i].titulo, sizeof(tabela[i].titulo), stdin);
        tabela[i].titulo[strcspn(tabela[i].titulo, "\n")] = '\0'; // Remove o caractere de nova linha, se presente

        printf("Digite o autor do livro: ");
        fgets(tabela[i].autor, sizeof(tabela[i].autor), stdin);
        tabela[i].autor[strcspn(tabela[i].autor, "\n")] = '\0'; // Remove o caractere de nova linha, se presente

        printf("Digite o ano de publicacao do livro: ");
        scanf("%d", &tabela[i].anoPublicacao);
        getchar(); // Limpa o buffer de entrada
    }
}

int main() {
    int tamanho;
    printf("Digite o tamanho da tabela de livros: ");
    scanf("%d", &tamanho);
    getchar(); // Limpa o buffer de entrada

    Livro *tabela = (Livro*)malloc(tamanho * sizeof(Livro)); // Aloca memória para a tabela de livros
    if (tabela == NULL) {
        printf("Erro: Falha ao alocar memória.\n");
        return 1;
    }

    preencherTabelaLivros(tabela, tamanho);

    printf("\nDados da tabela de livros inserida:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Título: %s\n", tabela[i].titulo);
        printf("Autor: %s\n", tabela[i].autor);
        printf("Ano de Publicação: %d\n", tabela[i].anoPublicacao);
        printf("\n");
    }

    free(tabela); // Libera a memória alocada para a tabela de livros

    return 0;
}