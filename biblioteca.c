//Cidades
//3 a 5 monstros
//Loja com diferentes tiers de upgrades
//Tema: NATAL
//Password ultima cidade
#include <stdio.h>
#include <stdlib.h>

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

//----------------------------- Guerreiro ---------------------------------------------------------------------
void guerreiro() {

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
        system("cls");
        while (enemyLife > 0) {
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
        system("cls");
        while (enemyLife > 0) {
            printf("\nVoce ataca o dragao!\n");
            if (arma == 1) armaDamage = rand() % 11 + dmgUp;
            else if (arma == 2) armaDamage = rand() % 9 + dmgUp;
            else if (arma == 3) armaDamage = rand() % 13 + dmgUp;
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
}

//----------------------------- Mago ---------------------------------------------------------------------

void mago() {
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
        system("cls");
        while (enemyLife > 0) {
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
        system("cls");
        while (enemyLife > 0) {
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
}

//----------------------------- Arqueiro ---------------------------------------------------------------------
void arqueiro() {

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
                    system("cls");
                    while (enemyLife > 0) {
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
                    system("cls");
                    while (enemyLife > 0) {
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

}