#include <stdio.h>

int main()
{
    int passos;
    int total = 0;
    int horas = 0;

    while (total < 10000)
    {
        printf("Digite a quantidade de passos dados na hora %d: ", horas + 1);
        scanf("%d", &passos);

        total = total + passos;
        horas++;
    }

    printf("\nMeta de 10.000 passos atingida!\n");
    printf("Total de passos: %d\n", total);
    printf("Foram necessarias %d horas.\n", horas);

    return 0;
}