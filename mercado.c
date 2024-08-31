#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Declarando as variaveis solicitadas no enunciado
    char nomeProduto[100];
    int quantidade;
    float precoUnitario, valorTotal;
    float valorTotalDia = 0;
    char continuar = 's';


    printf("\t\t\t\t\t\tMercado da Maria\n");

    //Loop pra registrar as vendas de N produtos
    while(continuar == 's' || continuar == 'S')
    {


        printf("Nome do produto: ");
        fflush(stdin);
        gets(nomeProduto);

        printf("Quantidade vendida em unidades: ");
        scanf("%d", &quantidade);

        printf("Preco Unitario: ");
        scanf("%f", &precoUnitario);


        valorTotal = quantidade * precoUnitario; //Calculando o valor total do produto escolhido
        valorTotalDia = valorTotalDia + valorTotal; //Valor total do produto escolhido eh adicionado ao valor total do dia

        getchar();

        printf("Deseja registrar outro produto?(s ou n): ");
        continuar = getchar();
        getchar();

    }

    printf("Valor total recebido do dia: R$%.2f", valorTotalDia);

    return 0;

}
