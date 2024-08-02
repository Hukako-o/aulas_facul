#include "stdio.h";
#include "locale.h";

void main() {
    setlocale(LC_ALL, "Portuguese");

    //desafios *******789

    void ex_1() {
        int dia, mes, ano;


        printf("Dia: \n");
        scanf("%d", &dia);

        printf("M�s: \n");
        scanf("%d", &mes);

        printf("Ano: \n");
        scanf("%d", &ano);

        printf("\n%d/%d/%d \n", dia, mes, ano);

        //checar se o m�s est� entre 1 e 12
        if(mes >= 0 && mes <= 12) {
            if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
                //checar dias dos meses entre 1, 3, 5, 7, 8, 10, 12
                if(dia >= 1 && dia <= 31) {
                    printf("Data v�lida!!!");
                } else {
                    printf("Data inv�lida!");
                }

            } else if(mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                //checar dias dos meses entre 4, 6, 9, 11
                if(dia >= 1 && dia <= 30) {
                    printf("Data v�lida!!!");
                } else {
                    printf("Data inv�lida!");
                }

            } else if(mes == 2) {
                //checar ano bisexto
                if(ano % 4 == 0) {
                    if(dia >= 1 && dia <= 29) {
                        printf("Data v�lida!!! (ano bisexto)");
                    } else {
                        printf("Data inv�lida! (ano bisexto)");
                    }
                } else {
                    if(dia >= 1 && dia <= 28) {
                        printf("Data v�lida!!!");
                    } else {
                        printf("Data inv�lida!");
                    }
                }
            } else {
                printf("Erro inesperado, cheque o c�digo!");
            }
        } else {
            printf("Data inv�lida!");
        }
    }

    void ex_2() {
        float num1, num2, num3;

        printf("Valor do num1: ");
        scanf("%f", &num1);

        printf("Valor do num2: ");
        scanf("%f", &num2);

        printf("Valor do num3: ");
        scanf("%f", &num3);

        printf("\nnum1 = %f; num2 = %f; num3 = %f \n\n", num1, num2, num3);

        if(num1 <= num2 && num1 <= num3) {
            printf("%f \n", num1);

            if(num2 <= num3) {
                printf("%f \n", num2);
                printf("%f \n", num3);
            } else {
                printf("%f \n", num3);
                printf("%f \n", num2);
            }
        } else if(num2 <= num1 && num2 <= num3) {
            printf("%f \n", num2);

            if(num1 <= num3) {
                printf("%f \n", num1);
                printf("%f \n", num3);
            } else {
                printf("%f \n", num3);
                printf("%f \n", num1);
            }
        } else if(num3 <= num1 && num3 <= num2) {
            printf("%f \n", num3);

            if(num1 <= num2) {
                printf("%f \n", num1);
                printf("%f \n", num2);
            } else {
                printf("%f \n", num2);
                printf("%f \n", num1);
            }
        } else {
            printf("Erro inesperado! Checar o c�digo");
        }
    }

    void ex_3() {
        float num1, num2, num3;

        printf("Valor do num1: ");
        scanf("%f", &num1);

        printf("Valor do num2: ");
        scanf("%f", &num2);

        printf("Valor do num3: ");
        scanf("%f", &num3);

        printf("num1 = %f; num2 = %f; num3 = %f \n\n", num1, num2, num3);

        if(num1 >= num2 && num1 >= num3) {
            printf("%f \n", num1);
        } else if(num2 >= num1 && num2 >= num3) {
            printf("%f \n", num2);
        } else {
            printf("%f \n", num3);
        }
    }

    void ex_4() {
        float num;

        printf("Digite um n�mero para saber se � multiplo de 5: ");
        scanf("%f", &num);
        printf("\n%f\n\n", num);

        num = abs(num);

        printf("\n%f\n\n", num);

        if(num == 0) {
            printf("%f � multiplo de 5!");
        } else {
            printf("N�o � multiplo!");
        }
    }
    //ex_1();
    //ex_2();
    //ex_3();
    //ex_4();

    //  SWITCH

    void switch_ex_1() {
        float a, b, c;
        char sinal;

        printf("Valor de A: ");
        scanf("%f", &a);
        printf("Valor de B: ");
        scanf("%f", &b);
        printf("Tipo de Sinal: ");
        fflush(stdin);
        scanf("%c", &sinal);

        switch(sinal) {
            case '+':
                c = a + b;
                printf("\nSoma: %f\n", c);
                break;
            case '-':
                c = a - b;
                printf("\nSubtra��o: %f\n", c);
                break;
            case '/':
                c = a / b;
                printf("\nDivis�o: %f\n", c);
                break;
            case '*':
                c = a * b;
                printf("\nMultiplica��o: %f\n", c);
                break;
            default:
                printf("\nErro! Digite um sinal v�lido (+, -, /, *)\n");
        }
    }

    void switch_ex_2() {
        int mes;

        printf("Digite o n�mero do m�s (1 a 12): ");
        scanf("%d", &mes);

        switch(mes) {
            case 1:
                printf("\nJaneiro");
                break;
            case 2:
                printf("\nFevereiro");
                break;
            case 3:
                printf("\nMar�o");
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
                printf("\nM�s invalido");
        }

        switch_ex_2();
    }
}
