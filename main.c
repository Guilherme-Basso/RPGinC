#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

extern int classe;
extern int arma;
extern int enemy;

int main(void) {
    srand(time(NULL));

    int opcao = 1;

    printf("=== RPG DE NATAL ===\n");
    printf("Escolha sua classe:\n");
    printf("1 - Guerreiro\n");
    printf("2 - Mago\n");
    printf("3 - Arqueiro\n");
    scanf("%d", &classe);

    if (classe == 1) {
        printf("Escolha sua arma:\n");
        printf("1 - Machado (D8)\n");
        printf("2 - Martelo (D10)\n");
        printf("3 - Espada (D12)\n");
        scanf("%d", &arma);
    } else if (classe == 2) {
        printf("Escolha sua magia:\n");
        printf("1 - Gelo (D8)\n");
        printf("2 - Raio (D10)\n");
        printf("3 - Fogo (D12)\n");
        scanf("%d", &arma);
    } else if (classe == 3) {
        printf("Escolha seu arco:\n");
        printf("1 - Arco Simples (D8)\n");
        printf("2 - Arco Composto (D10)\n");
        printf("3 - Besta (D12)\n");
        scanf("%d", &arma);
        system("cls");
    }

    do {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1 - Combate\n");
        printf("2 - Loja\n");
        printf("0 - Sair\n");
        printf("Escolha sua opcao: ");
        scanf(" %d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nEscolha seu adversario:\n");
                printf("1 - Boneco de Neve\n");
                printf("2 - Boneco de Gengibre\n");
                printf("3 - Duende do Natal\n");
                scanf(" %d", &enemy);
                system("cls");
                combate(enemy);
                break;

            case 2:lojaCidade();break;

            case 0:printf("\nEncerrando o jogo... Feliz Natal!\n");break;

            default:printf("\nOpcao invalida!\n");
        }
        system("pause");
    } while (opcao != 0);
    return 0;
}
