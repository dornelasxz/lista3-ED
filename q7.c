#include <stdio.h>
#include <dos.h> // Biblioteca para a função sleep()

void cronometro(int segundos) {
    printf("Contagem regressiva iniciada!\n");

    // Loop para contagem regressiva
    for (int i = segundos; i > 0; i--) {
        printf("%d\n", i);
        sleep(1); // Pausa por 1 segundo
    }

    // Tocar a campainha no final
    printf("ding-dong!! (Campainha)\a\n"); // O caractere \a representa um "bel" para tocar a campainha
}

int main() {
    int segundos;

    // Solicita ao usuário para inserir o número de segundos
    printf("Digite o número de segundos para a contagem regressiva: ");
    scanf("%d", &segundos);

    // Chama a função cronometro com o número de segundos inserido
    cronometro(segundos);

    return 0;
}