#include "stdio.h";
#include "locale.h";

void main() {
    setlocale(LC_ALL, "Portuguese");

    void ex_4() {
        float num1, num2, num3;

        printf("Valor do num1: ");
        scanf("%f", &num1);

        printf("Valor do num2: ");
        scanf("%f", &num2);

        printf("Valor do num3: ");
        scanf("%f", &num3);

        printf("num1 = %f; num2 = %f; num3 = %f \n\n", num1, num2, num3);

        if(num1 > num2 && num1 > num3) {
            printf("%f \n", num1);
        } else if(num2 > num1 && num2 > num3) {
            printf("%f \n", num2);
        } else if(num3 > num1 && num3 > num2) {
            printf("%f \n", num3);
        } else {
            printf("Todos os números são iguais: %f", num1);
        }
    }

    void ex_5() {
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
            printf("Erro inesperado! Checar o código");
        }
    }

    //ex_4();
    ex_5();
}
