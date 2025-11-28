#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

int main(void) {
    srand(time(NULL));

    int HP_G = 125;
    int HP_M = 65;
    int HP_A = 90;
    int gold = 0;

    int dmgUp=0;
    int loja=0;
    int classe;
    int arma;
    int armaDamage;
    int enemy;
    int enemyLife;

    do {
        system("cls");
        printf("\nEscolha sua classe:\n");
        printf("1- Guerreiro\n");
        printf("2- Mago\n");
        printf("3- Arqueiro\n");
        printf("4- Loja\n");
        printf("0- Sair\n");
        printf("Qual sera? \n");
        scanf("%d", &classe);

        switch (classe) {

            case 1:guerreiro();break;
            case 2:mago();break;
            case 3:arqueiro();break;

            case 4:
                system("cls");
                printf("Bem vindo a Loja:\n");
                printf("Voce tem %d gold para gastar.\n", gold);
                printf("Voce gostaria de comprar o que?\n");
                printf("1- Upgrade de dano 1. Custo 15 gold.\n");
                scanf("%d", &loja);
                if (loja == 1 && gold >=15) {
                    dmgUp += 2;
                    gold -= 15;
                    printf("Seu bonus de dano foi aumentado em 2 (total:%d)\n", dmgUp);
                    printf("Seu gold foi reduzido em 15 (gold total: %d\n", gold);
                    system("pause");
                }else {
                    printf("Gold insuficiente");
                    system("pause");
                }

                break;

            case 0:
                printf("\nEncerrando...\n");
                break;

            default:
                printf("\nOpçao invalida!\n");
        }

    } while (classe != 0);

    return 0;
}