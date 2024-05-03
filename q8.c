#include <stdio.h>
#include <stdlib.h> // Para a função atof()

// Função para calcular o resultado da expressão
float calcular(float valor1, char operador, float valor2) {
    switch(operador) {
        case '+':
            return valor1 + valor2;
        case '-':
            return valor1 - valor2;
        case '*':
            return valor1 * valor2;
        case '/':
            if (valor2 != 0)
                return valor1 / valor2;
            else {
                printf("Erro: divisão por zero!\n");
                exit(1); // Encerra o programa com código de erro
            }
        default:
            printf("Operador inválido!\n");
            exit(1); // Encerra o programa com código de erro
    }
}

int main() {
    char operador;
    float valor1, valor2, resultado;

    // Solicita ao usuário para inserir a expressão aritmética
    printf("Digite a expressão aritmética no formato 'CALC <valor1> <operador> <valor2>': ");
    scanf(" CALC %f %c %f", &valor1, &operador, &valor2);

    // Calcula o resultado usando a função calcular
    resultado = calcular(valor1, operador, valor2);

    // Exibe o resultado
    printf("Resultado: %.2f\n", resultado);

    return 0;
}