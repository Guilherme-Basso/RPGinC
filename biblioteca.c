#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int HP_G = 125;
int HP_M = 65;
int HP_A = 90;
int gold = 0;
int dmgUp = 0;
int loja = 0;
int classe;
int arma;
int enemy;
int enemyLife;

int rolarDado(int lados) {
    return (rand() % lados) + 1;
}

void combate(int enemy) {
    if (enemy == 1) {
        enemyLife = 22;
        printf("Voce esta enfrentando um Boneco de Neve!\n");
    } else if (enemy == 2) {
        enemyLife = 38;
        printf("Voce esta enfrentando um Boneco de Gengibre!\n");
    } else if (enemy == 3) {
        enemyLife = 55;
        printf("Voce esta enfrentando um Duende do Natal!\n");
    } else {
        printf("Inimigo invalido!\n");
        return;
    }

    while (enemyLife > 0) {
        int armaDamage = 0;

        if (arma == 1) armaDamage = rolarDado(8) + dmgUp;
        else if (arma == 2) armaDamage = rolarDado(10) + dmgUp;
        else if (arma == 3) armaDamage = rolarDado(12) + dmgUp;

        printf("Voce causou %d de dano!\n", armaDamage);
        enemyLife -= armaDamage;
        printf("O inimigo tem %d de vida.\n", enemyLife);
    }

    printf("Parabens! Voce derrotou o adversario!\n");
    int ganho = (enemy == 1) ? rand() % 4 : (enemy == 2) ? rand() % 6 : rand() % 8;
    gold += ganho;
    printf("Voce ganhou %d de ouro! Agora tem %d gold.\n", ganho, gold);
}

void lojaCidade() {
    system("cls");
    printf("Bem-vindo a Loja de Natal!\n");
    printf("Voce tem %d gold.\n", gold);
    printf("1- Upgrade de dano (+2) - 15 gold\n");
    printf("2- Upgrade de dano (+10) - 75 gold\n");
    scanf("%d", &loja);

    if (loja == 1 && gold >= 15) {
        dmgUp += 2;
        gold -= 15;
        printf("Seu bonus de dano aumentou em 2 (total: %d)\n", dmgUp);
        printf("Seu gold foi reduzido em 15 (total: %d)\n", gold);
    }else if (loja == 2 && gold >= 75) {
        dmgUp += 10;
        gold -= 75;
        printf("Seu bonus de dano aumentou em 5 (total: %d)\n", dmgUp);
        printf("Seu gold foi reduzido em 75 (total: %d)\n");
    }else {
        printf("Gold insuficiente!\n");
    }
    system("pause");
}
