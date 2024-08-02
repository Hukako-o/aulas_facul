#include "stdio.h";
#include "locale.h";

void main() {
    setlocale(LC_ALL, "Portuguese");


    void ex_1() {
        int nota;

        printf("Valor da nota: \n");
        scanf("%d", &nota);

        if(nota >= 0 && nota <= 10) {
            printf("Nota válida!!! (%d)", nota);
        } else {
            printf("Nota inválida! (%d)", nota);
        }
    }

    void ex_2() {
        int temperatura;

        printf("Temperatura atual: \n");
        scanf("%d", &temperatura);

        if(temperatura < 18) {
            printf("Clima FRIO!");
        } else if(temperatura >= 18 && temperatura <= 25) {
            printf("Clima AGRADAVEL!");
        } else if(temperatura > 25) {
            printf("Temperatura QUENTE!");
        } else {
            printf("Erro! Digite um valor válido");
        }
    }

    void ex_3() {
        int dia, mes, ano;


        printf("Dia: \n");
        scanf("%d", &dia);

        printf("Mês: \n");
        scanf("%d", &mes);

        printf("Ano: \n");
        scanf("%d", &ano);

        printf("\n%d/%d/%d \n", dia, mes, ano);

        //checar se o mês está entre 1 e 12
        if(mes >= 0 && mes <= 12) {
            if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
                //checar dias dos meses entre 1, 3, 5, 7, 8, 10, 12
                if(dia >= 1 && dia <= 31) {
                    printf("Data válida!!!");
                } else {
                    printf("Data inválida!");
                }

            } else if(mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                //checar dias dos meses entre 4, 6, 9, 11
                if(dia >= 1 && dia <= 30) {
                    printf("Data válida!!!");
                } else {
                    printf("Data inválida!");
                }

            } else if(mes == 2) {
                //checar ano bisexto
                if(ano % 4 == 0) {
                    if(dia >= 1 && dia <= 29) {
                        printf("Data válida!!! (ano bisexto)");
                    } else {
                        printf("Data inválida! (ano bisexto)");
                    }
                } else {
                    if(dia >= 1 && dia <= 28) {
                        printf("Data válida!!!");
                    } else {
                        printf("Data inválida!");
                    }
                }
            } else {
                printf("Erro inesperado, cheque o código!");
            }
        } else {
            printf("Data inválida!");
        }
    }

    //ex_1();
    //ex_2();
    ex_3();
}
