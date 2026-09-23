#include <stdio.h>

int main()
{
    float consumo;
    float soma=0;
    float media;
    int i;

    for(i=0; i<5; i++)
    {
        printf("Digite o consumo de água do morador %d", i);
        scanf("%f", &consumo);

        if (consumo<=20)
        {
            printf("Consumo dentro da média\n");
        }
        else
        {
            printf("Consumo acima da média\n");
        }

        soma = soma + consumo;
    }

    media = soma / 5;

    printf("Consumo médio geral é: %.2f m3\n", media);
    
}