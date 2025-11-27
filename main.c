#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
        printf("Qual sera? ");
        scanf("%d", &classe);

        switch (classe) {
            case 1:
                system("cls");
                printf("\nVoce e um Guerreiro, qual arma vai usar?\n");
                printf("1- Machado de duas maos (D10)\n");
                printf("2- Martelo de duas maos (D8)\n");
                printf("3- Espada de duas maos (D12)\n");
                scanf("%d", &arma);

                printf("\nEscolha seu adversario:\n");
                printf("1- Rato\n");
                printf("2- Dragao\n");
                scanf("%d", &enemy);

                if (enemy == 1) {
                    enemyLife = 35;
                    while (enemyLife > 0) {
                        system("cls");
                        printf("\nVoce ataca o rato!\n");
                        if (arma == 1) armaDamage = rand() % 11 + dmgUp;
                        else if (arma == 2) armaDamage = rand() % 9 + dmgUp;
                        else if (arma == 3) armaDamage = rand() % 13 + dmgUp;
                        else armaDamage = 0;

                        printf("Seu dano foi de %d\n", armaDamage);
                        enemyLife -= armaDamage;
                        printf("O inimigo agora tem %d de vida\n", enemyLife);
                    }
                    printf("\nParabens!!! Voce derrotou o Rato!\n");
                    gold = gold + rand() % 6;
                    printf("Voce ganhou %d de ouro!\n", gold);
                    printf("Agora voce tem %d gold.", gold);
                    system ("pause");
                }
                else if (enemy == 2) {
                    enemyLife = 666;
                    while (enemyLife > 0) {
                        system("cls");
                        printf("\nVoce ataca o dragao!\n");
                        if (arma == 1) armaDamage = rand() % 11;
                        else if (arma == 2) armaDamage = rand() % 9;
                        else if (arma == 3) armaDamage = rand() % 13;
                        else armaDamage = 0;

                        printf("Seu dano foi de %d\n", armaDamage);
                        enemyLife -= armaDamage;
                        printf("O inimigo agora tem %d de vida\n", enemyLife);
                    }
                    printf("\nParabens!!! Voce derrotou o Dragao!\n");
                    gold = gold + rand() % 351;
                    printf("Voce ganhou %d de ouro!\n", gold);
                    printf("Agora voce tem %d gold.", gold);
                    system("pause");
                }
                break;

            case 2:
                printf("\nVoce e um Mago, qual arma vai usar?\n");
                printf("1- Magia de Gelo (D10)\n");
                printf("2- Magia de Fogo (D8)\n");
                printf("3- Magia de Raio (D12)\n");
                scanf("%d", &arma);

                printf("\nEscolha seu adversario:\n");
                printf("1- Rato\n");
                printf("2- Dragao\n");
                scanf("%d", &enemy);

                if (enemy == 1) {
                    enemyLife = 35;
                    while (enemyLife > 0) {
                        system("cls");
                        printf("\nVoce ataca o rato!\n");
                        if (arma == 1) armaDamage = rand() % 11;
                        else if (arma == 2) armaDamage = rand() % 9;
                        else if (arma == 3) armaDamage = rand() % 13;
                        else armaDamage = 0;

                        printf("Seu dano foi de %d\n", armaDamage);
                        enemyLife -= armaDamage;
                        printf("O inimigo agora tem %d de vida\n", enemyLife);
                    }
                    printf("\nParabens!!! Voce derrotou o Rato!\n");
                    gold = gold + rand() % 6;
                    printf("Voce ganhou %d de ouro!\n", gold);
                    printf("Agora voce tem %d gold.", gold);
                    system("pause");
                }
                else if (enemy == 2) {
                    enemyLife = 666;
                    while (enemyLife > 0) {
                        system("cls");
                        printf("\nVoce ataca o dragao!\n");
                        if (arma == 1) armaDamage = rand() % 11;
                        else if (arma == 2) armaDamage = rand() % 9;
                        else if (arma == 3) armaDamage = rand() % 13;
                        else armaDamage = 0;

                        printf("Seu dano foi de %d\n", armaDamage);
                        enemyLife -= armaDamage;
                        printf("O inimigo agora tem %d de vida\n", enemyLife);
                    }
                    printf("\nParabens!!! Voce derrotou o Drageo!\n");
                    gold = gold + rand() % 351;
                    printf("Voce ganhou %d de ouro!\n", gold);
                    printf("Agora voce tem %d gold.", gold);
                    system("pause");
                }

                break;

            case 3:
                printf("\nVoce e um Arqueiro, qual arma vai usar?\n");
                printf("1- Besta (D12)\n");
                printf("2- Arco Simples (D8)\n");
                printf("3- Arco Composto (D12)\n");
                scanf("%d", &arma);

                printf("\nEscolha seu adversario:\n");
                printf("1- Rato\n");
                printf("2- Dragao\n");
                scanf("%d", &enemy);

                if (enemy == 1) {
                    enemyLife = 35;
                    while (enemyLife > 0) {
                        system("cls");
                        printf("\nVoce ataca o rato!\n");
                        if (arma == 1) armaDamage = rand() % 11;
                        else if (arma == 2) armaDamage = rand() % 9;
                        else if (arma == 3) armaDamage = rand() % 13;
                        else armaDamage = 0;

                        printf("Seu dano foi de %d\n", armaDamage);
                        enemyLife -= armaDamage;
                        printf("O inimigo agora tem %d de vida\n", enemyLife);
                    }
                    printf("\nParabens!!! Voce derrotou o Rato!\n");
                    gold = gold + rand() % 6;
                    printf("Voce ganhou %d de ouro!\n", gold);
                    printf("Agora voce tem %d gold.", gold);
                    system("pause");
                }
                else if (enemy == 2) {
                    enemyLife = 666;
                    while (enemyLife > 0) {
                        system("cls");
                        printf("\nVoce ataca o dragao!\n");
                        if (arma == 1) armaDamage = rand() % 11;
                        else if (arma == 2) armaDamage = rand() % 9;
                        else if (arma == 3) armaDamage = rand() % 13;
                        else armaDamage = 0;

                        printf("Seu dano foi de %d\n", armaDamage);
                        enemyLife -= armaDamage;
                        printf("O inimigo agora tem %d de vida\n", enemyLife);
                    }
                    printf("\nParabens!!! Voce derrotou o Drageo!\n");
                    gold = gold + rand() % 351;
                    printf("Voce ganhou %d de ouro!\n", gold);
                    printf("Agora voce tem %d gold.", gold);
                    system("pause");
                }

                break;

            case 4:
                system("cls");
                printf("Bem vindo a Loja:\n");
                printf("Voce tem %d gold para gastar.\n", gold);
                printf("Voce gostaria de comprar o que?\n");
                printf("1- Upgrade de dano. Custo 15 gold.\n");
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