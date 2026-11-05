#include <stdio.h>

#define TAM 10

// Funcao para receber os numeros
void receberNumeros(int numeros[])
{
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
}

// Funcao para contar as repeticoes
void contarRepeticoes(int numeros[], int quantidade[])
{
    int i, j;

    for (i = 0; i < TAM; i++)
    {
        quantidade[i] = 0;

        for (j = 0; j < TAM; j++)
        {
            if (numeros[i] == numeros[j])
            {
                quantidade[i]++;
            }
        }
    }
}

// Funcao para verificar se o numero ja apareceu antes
int jaVerificado(int numeros[], int posicao)
{
    int j;

    for (j = 0; j < posicao; j++)
    {
        if (numeros[posicao] == numeros[j])
        {
            return 1;
        }
    }

    return 0;
}

// Funcao para somar os valores que se repetem
int somarRepetidos(int numeros[], int quantidade[])
{
    int i;
    int soma = 0;

    for (i = 0; i < TAM; i++)
    {
        if (quantidade[i] > 1 && jaVerificado(numeros, i) == 0)
        {
            soma += numeros[i];
        }
    }

    return soma;
}

// Funcao para receber e mostrar os animais
void receberAnimais(int quantidade)
{
    int i;
    char animal[50];

    for (i = 0; i < quantidade; i++)
    {
        printf("Digite o nome do animal %d: ", i + 1);
        scanf("%49s", animal);

        printf("Animal recebido: %s\n", animal);
    }
}

// Funcao principal para verificar os numeros
void verificarNumeros(int numeros[], int quantidade[], int soma)
{
    int i;

    for (i = 0; i < TAM; i++)
    {
        if (quantidade[i] > 1 && jaVerificado(numeros, i) == 0)
        {
            printf("\nNumero: %d\n", numeros[i]);
            printf("Quantidade de repeticoes: %d\n", quantidade[i]);

            if (quantidade[i] % 2 != 0)
            {
                printf("Quantidade impar!\n");
                printf("Digite %d nomes de animais:\n", soma);

                receberAnimais(soma);
            }
            else
            {
                printf("Quantidade par!\n");
                printf("Digite %d nomes de animais:\n", quantidade[i]);

                receberAnimais(quantidade[i]);
            }
        }
    }
}

int main()
{
    int numeros[TAM];
    int quantidade[TAM];
    int soma;

    receberNumeros(numeros);

    contarRepeticoes(numeros, quantidade);

    soma = somarRepetidos(numeros, quantidade);

    printf("\nSoma dos numeros repetidos: %d\n", soma);

    verificarNumeros(numeros, quantidade, soma);

    return 0;
}
