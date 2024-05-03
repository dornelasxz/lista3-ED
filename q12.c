#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura
typedef struct {
    int id;
    char nome[50];
    float salario;
} Funcionario;

// Função de comparação para ordenar por ID
int compararPorID(const void *a, const void *b) {
    return ((Funcionario*)a)->id - ((Funcionario*)b)->id;
}

// Função de comparação para ordenar por nome
int compararPorNome(const void *a, const void *b) {
    return strcmp(((Funcionario*)a)->nome, ((Funcionario*)b)->nome);
}

// Função de comparação para ordenar por salário
int compararPorSalario(const void *a, const void *b) {
    if (((Funcionario*)a)->salario < ((Funcionario*)b)->salario) return -1;
    if (((Funcionario*)a)->salario > ((Funcionario*)b)->salario) return 1;
    return 0;
}

int main() {
    // Inicialização do vetor de estruturas
    Funcionario funcionarios[] = {
        {101, "Carlos", 2500},
        {103, "Ana", 2800},
        {102, "Joao", 2200},
        {104, "Maria", 3200}
    };
    int numFuncionarios = sizeof(funcionarios) / sizeof(funcionarios[0]);

    // Ordenação por ID
    qsort(funcionarios, numFuncionarios, sizeof(Funcionario), compararPorID);
    printf("Ordenado por ID:\n");
    for (int i = 0; i < numFuncionarios; i++) {
        printf("ID: %d, Nome: %s, Salario: %.2f\n", funcionarios[i].id, funcionarios[i].nome, funcionarios[i].salario);
    }

    // Ordenação por nome
    qsort(funcionarios, numFuncionarios, sizeof(Funcionario), compararPorNome);
    printf("\nOrdenado por Nome:\n");
    for (int i = 0; i < numFuncionarios; i++) {
        printf("ID: %d, Nome: %s, Salario: %.2f\n", funcionarios[i].id, funcionarios[i].nome, funcionarios[i].salario);
    }

    // Ordenação por salário
    qsort(funcionarios, numFuncionarios, sizeof(Funcionario), compararPorSalario);
    printf("\nOrdenado por Salario:\n");
    for (int i = 0; i < numFuncionarios; i++) {
        printf("ID: %d, Nome: %s, Salario: %.2f\n", funcionarios[i].id, funcionarios[i].nome, funcionarios[i].salario);
    }

    return 0;
}