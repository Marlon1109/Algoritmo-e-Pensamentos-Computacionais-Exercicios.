#include <stdio.h>

int main()
{
    float moeda;
    float total = 0;

    do
    {
        printf("\nDigite o valor da moeda (0.50, 1.00 ou 2.00): ");
        scanf("%f", &moeda);

        if (moeda == 0.50 || moeda == 1.00 || moeda == 2.00)
        {
            total = total + moeda;

            printf("Moeda adicionada ao cofrinho!\n");
            printf("Total acumulado: R$ %.2f\n", total);
        }
        else if (moeda != 0)
        {
            printf("Valor de moeda invalido!\n");
        }

    } while (moeda != 0);

    printf("\nCofrinho encerrado!\n");
    printf("Total acumulado: R$ %.2f\n", total);

    return 0;
}