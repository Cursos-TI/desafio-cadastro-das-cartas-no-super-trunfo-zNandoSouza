#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int codigo;
    char nome[50];
    int populacao;
    float area;
    int PIB;
    int numeros;

    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo);

    printf ("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a Quantidade da População: \n");
    scanf("%f", &populacao);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%d", &PIB);

    printf("Digite o números de pontos turísticos: \n");
    scanf("%d", numeros);

printf("Nome da Cidade: %s - Código da cidade: %d \n", nome, codigo);
printf("População: %d - Área: %f \n", populacao, area);
printf("PIB: %d - Números de pontos turísticos %d \n", PIB, numeros);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
