#include "stdio.h";
#include "locale.h";

void main() {
    setlocale(LC_ALL, "Portuguese");


    void ex_1() {
        int idade_aluno;

        printf("Idade do Aluno: ");
        scanf("%d", &idade_aluno);

        if(idade_aluno >= 18) {
            printf("Aluno maior de idade!");
        } else if (idade_aluno < 18 && idade_aluno >= 0) {
            printf("Aluno menor de idade!");
        } else {
            printf("Aluno nem nasceu!");
        }
    }

    void ex_2() {
        int aluno_nota, aluno_faltas;

        printf("Nota do Aluno: ");
        scanf("%d", &aluno_nota);

        printf("Faltas do Aluno: ");
        scanf("%d", &aluno_faltas);

        if(aluno_nota >= 60 && aluno_faltas <= 20) {
            printf("Aluno aprovado!");
        } else {
            printf("Aluno reprovado!");
        }
    }

    void ex_3() {
        float saldo, saque;

        printf("Seu saldo: ");
        scanf("%f", &saldo);

        printf("Valor saque: ");
        scanf("%f", &saque);

        if(saldo > 0 && saque <= saldo) {
            saldo -= saque;
            printf("\nSaque efetuado\n");
            printf("\nSaldo restante: %.2f\n", saldo);
        } else {
            printf("Saldo insuficiente");
        }

        /*
        if(saldo > 0) {
            if(saldo >= saque) {
                saldo -= saque;
                printf("\nSaque efetuado\n");
                printf("\nSaldo restante: %.2f\n", saldo);
            }
            if(saldo < saque) {
                printf("Saldo insuficiente");
            }
        } else if(saldo <= 0) {
            printf("Saldo insuficiente");
        } else {
            printf("Erro!");
        }
        */
    }


    //ex_1();
    //ex_2();
    ex_3();
}
