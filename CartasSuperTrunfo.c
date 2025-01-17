#include <stdio.h>

//aluno: Fernando Souza De Araujo

int main() {

    int codigo;
    char nome[50];
    int populacao;
    float area;
    int PIB;
    int numeros;

    float densidade;
    float capita;

    printf("Digite o código da cidade: \n");
    scanf(" %d", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome);

    printf("Digite a Quantidade da População: \n");
    scanf(" %d", &populacao);

    printf("Digite o tamanho da área: \n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf(" %d", &PIB);

    printf("Digite o números de pontos turísticos: \n");
    scanf(" %d", &numeros);


 printf("Código da cidade: %d \n", codigo);
 printf("Nome da Cidade: %s \n", nome);
 printf("População: %d \n", populacao);
 printf("Área: %f \n", area);
 printf("PIB: %d \n", PIB);
 printf("Números de pontos turísticos %d \n", numeros);

 densidade = (populacao / area);

 capita = (PIB / populacao);

  printf("Densidade Populacional: %.2f", densidade);

  printf("PIB per Capita: %.2f", capita);


    return 0;
}
