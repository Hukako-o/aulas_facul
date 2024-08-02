#include "stdio.h"
#include "locale.h"
#include "string.h"

void main() {
    setlocale(LC_ALL, "Portuguese");

    void ex1() {
        int mes;

        printf("Digite o numero do mês: ");
        scanf("%d", &mes);

        switch(mes) {
            case 1:
                printf("\nJaneiro");
                break;
            case 2:
                printf("\nFevereiro");
                break;
            case 3:
                printf("\nMarço");
                break;
            case 4:
                printf("\nAbril");
                break;
            case 5:
                printf("\nMaio");
                break;
            case 6:
                printf("\nJunho");
                break;
            case 7:
                printf("\nJulho");
                break;
            case 8:
                printf("\nAgosto");
                break;
            case 9:
                printf("\nSetembro");
                break;
            case 10:
                printf("\nOutubro");
                break;
            case 11:
                printf("\nNovembro");
                break;
            case 12:
                printf("\nDezembro");
                break;
            default:
                printf("\nMês invalido!");
                break;
        }
        printf("\n");
    }

    void ex2() {
        int dia_semana;

        printf("Digite o numero do dia da semana: ");
        scanf("%d", &dia_semana);

        switch(dia_semana) {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Terça-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sabado");
            break;
        default:
            printf("Digite um dia válido!");
            break;
        }
    }

    void ex3() {
        int num, dezena, unidade;
        char num_10_to_19[40];
        char un[40];
        char de[40];

        printf("Digite um numero de 1 a 99: ");
        scanf("%d", &num);

        dezena = num / 10;
        unidade = num % 10;

        //pulo de linha inicial
        printf("\n");

        if(num >= 1 && num <= 99) {
            //numeros especificos entre 10 e 19
            if(num >= 10 && num <= 19) {
                switch(num) {
                    case 10:
                        strcpy(num_10_to_19, "dez");
                        break;
                    case 11:
                        strcpy(num_10_to_19, "onze");
                        break;
                    case 12:
                        strcpy(num_10_to_19, "doze");
                        break;
                    case 13:
                        strcpy(num_10_to_19, "treze");
                        break;
                    case 14:
                        strcpy(num_10_to_19, "quatorze");
                        break;
                    case 15:
                        strcpy(num_10_to_19, "quinze");
                        break;
                    case 16:
                        strcpy(num_10_to_19, "dezesseis");
                        break;
                    case 17:
                        strcpy(num_10_to_19, "dezessete");
                        break;
                    case 18:
                        strcpy(num_10_to_19, "dezoito");
                        break;
                    case 19:
                        strcpy(num_10_to_19, "dezenove");
                        break;
                }
                printf("%s", num_10_to_19);
            } else {
                //dar nome as unidades
                switch(unidade) {
                    case 1:
                        strcpy(un, "um");
                        break;
                    case 2:
                        strcpy(un, "dois");
                        break;
                    case 3:
                        strcpy(un, "três");
                        break;
                    case 4:
                        strcpy(un, "quatro");
                        break;
                    case 5:
                        strcpy(un, "cinco");
                        break;
                    case 6:
                        strcpy(un, "seis");
                        break;
                    case 7:
                        strcpy(un, "sete");
                        break;
                    case 8:
                        strcpy(un, "oito");
                        break;
                    case 9:
                        strcpy(un, "nove");
                        break;
                    }
                //dar nome as dezenas
                switch(dezena) {
                    case 2:
                        strcpy(de, "vinte");
                        break;
                    case 3:
                        strcpy(de, "trinta");
                        break;
                    case 4:
                        strcpy(de, "quarenta");
                        break;
                    case 5:
                        strcpy(de, "cinquenta");
                        break;
                    case 6:
                        strcpy(de, "sessenta");
                        break;
                    case 7:
                        strcpy(de, "setenta");
                        break;
                    case 8:
                        strcpy(de, "oitenta");
                        break;
                    case 9:
                        strcpy(de, "noventa");
                        break;
                }
                //checar se num == 20, 30, 40...
                if(num <= 9) {
                    printf("%s", un);
                } else if(num % 10 == 0) {
                    printf("%s", de);
                } else {
                    printf("%s e %s", de, un);
                }
            }
        } else {
            printf("Digite um número válido!");
        }

        //pulo de linha final
        printf("\n");
    }
    //ex1();
    //ex2();
    ex3();
}
