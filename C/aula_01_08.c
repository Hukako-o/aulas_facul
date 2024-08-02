#include "stdio.h"
#include "locale.h"
#include "string.h"

void main() {
    setlocale(LC_ALL, "Portuguese");

    void ex1() {
        int codigo;

        printf("Indique o código do produto: ");
        scanf("%d", &codigo);

        printf("\n");
        switch(codigo) {
            case 1:
                printf("Alimento não-perecível");
                break;
            case 2:
            case 3:
            case 4:
                printf("Alimento perecível");
                break;
            case 5:
            case 6:
                printf("Vestuário");
                break;
            case 7:
                printf("Higiene pessoal");
                break;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                printf("Limpeza e utensílios domésticos");
                break;
            default:
                printf("Código inválido!");
                break;
        }
        printf("\n");
    }

    void ex2() {
        float val;
        int fpay;

        printf("Valor do produto: ");
        scanf("%f", &val);
        printf("Forma de pagamento: ");
        scanf("%d", &fpay);

        switch(fpay) {
            case 1:
                val *= 0.9;
                printf("\nSelecionado: À vista dinheiro ou cheque, desconto de 10%.");
                break;
            case 2:
                val *= 0.85;
                printf("\nSelecionado: À vista cartão de crédito, desconto de 15%.");
                break;
            case 3:
                val = val;
                printf("\nSelecionado: Duas vezes sem juros.");
                break;
            case 4:
                val *= 1.1;
                printf("\nSelecionado: Duas vezes com juros de 10%.");
                break;
            default:
                printf("\nSelecione uma forma de pagamento válida!");
                break;
        }

        if(fpay >= 1 && fpay <= 4) {
            printf("\n\nValor final: R$ %.2f\n", val);
        } else {
            printf("\n\nNão foi possível finalizar a compra!\n", val);
        }
    }

    void ex3() {
        float x, y, res;
        int z;
        char sinal[1];

        printf("Valor de X: ");
        scanf("%f", &x);
        printf("Valor de Y: ");
        scanf("%f", &y);
        fflush(stdin);
        printf("Operação: ");
        scanf("%s", &sinal);

        if(sinal == "+") {
        printf("\n%fFIM%sFIM\n", res, sinal);

        }

    }

    void ex4() {
        int item, qtd;
        float val, res;

        printf("Selecione item: ");
        scanf("%d", &item);
        printf("Selecione a quantidade: ");
        scanf("%d", &qtd);

        printf("\n");
        switch(item) {
            case 1:
                val = 5.00;
                printf("Refrigerante - R$ %.2f x %d", val, qtd);
                break;
            case 2:
                val = 3.50;
                printf("Água - R$ %.2f x %d", val, qtd);
                break;
            case 3:
                val = 8.00;
                printf("Cerveja - R$ %.2f x %d", val, qtd);
                break;
            case 4:
                val = 15.00;
                printf("Porção de Batata Frita - R$ %.2f x %d", val, qtd);
                break;
            case 5:
                val = 40.00;
                printf("Porção de Camarrão - R$ %.2f x %d", val, qtd);
                break;
            case 6:
                val = 12.00;
                printf("Lanches - R$ %.2f x %d", val, qtd);
                break;
            default:
                val = 0;
                printf("Selecione um item válido");
                break;
        }

        res = val * qtd;

        printf("\n\nTotal: %.2f\n", res);
    }

    void ex5() {
        int dia, mes, ano, max_dia;

        printf("Selecione o dia: ");
        scanf("%d", &dia);
        printf("Selecione o mês: ");
        scanf("%d", &mes);
        printf("Selecione o ano: ");
        scanf("%d", &ano);

        if(ano % 4 == 0) {
            printf("Ano bisexto");
        }

        if(ano >= 1900 && ano <= 2023) {
            if(mes >= 1 && mes <= 12) {
                switch(mes) {
                    case 1:
                        max_dia = 31;
                        break;
                    case 2:
                        if(ano_bisexto == true) {
                            max_dia = 29;
                        } else {

                        }
                        break;
                    case 3:
                        max_dia = 31;
                        break;
                    case 4:
                        max_dia = 30;
                        break;
                    case 5:
                        max_dia = 31;
                        break;
                    case 6:
                        max_dia = 30;
                        break;
                    case 7:
                        max_dia = 31;
                        break;
                    case 8:
                        max_dia = 31;
                        break;
                    case 9:
                        max_dia = 30;
                        break
                    case 10:
                        max_dia = 31;
                        break;
                    case 11:
                        max_dia = 30;
                        break;
                    case 12:
                        max_dia = 31;
                        break;
                }
            } else {
                printf("Mês invalido!");
            }
        } else {
            printf("Ano invalido!")
        }
    }


    //ex1();
    //ex2();
    //ex3();
    //ex4();
    ex5();
}

