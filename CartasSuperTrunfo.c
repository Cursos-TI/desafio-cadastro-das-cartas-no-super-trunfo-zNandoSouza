#include <stdio.h>

//aluno: Fernando Souza De Araujo

int main() {
    // Carta 1
    char estado1[20], codigo1[20], nome1[20];
    int populacao1, numeros1;
    float area1, PIB1, superpoder1;

    // Carta 2
    char estado2[20], codigo2[20], nome2[20];
    int populacao2, numeros2;
     float area2, PIB2, superpoder2;

    float densidade1, capita1;
    float densidade2, capita2;

    // Entrada da Carta 1
    printf("Digite o nome do Estado da primeira carta: ");
    scanf("%s", estado1);
    printf("Digite o código da primeira cidade: ");
    scanf("%s", codigo1);
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", nome1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeros1);

    // Entrada da Carta 2
    printf("\nDigite o nome do Estado da segunda carta: ");
    scanf("%s", estado2);
    printf("Digite o código da segunda cidade: ");
    scanf("%s", codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", nome2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeros2);

    // Cálculos das duas cartas
    densidade1 = populacao1 / area1;
    capita1 = PIB1 / populacao1;
    superpoder1 = populacao1 + area1 + PIB1 + numeros1 + capita1 - densidade1;

    densidade2 = populacao2 / area2;
    capita2 = PIB2 / populacao2;
    superpoder2 = populacao2 + area2 + PIB2 + numeros2 + capita2 - densidade2;

    // Exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", numeros1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", capita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", numeros2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", capita2);
    printf("Super Poder: %.2f\n", superpoder2);

 // Comparação das propriedades
    printf("\n=== Comparação das Cartas ===\n");

    printf("População: %d\n", (int) populacao1 > populacao2);
    printf("Área: %d\n", (int) area1 > area2);
    printf("PIB: %d\n", (int) PIB1 > PIB2);
    printf("Pontos turísticos: %d\n", (int) numeros1 > numeros2);
    printf("PIB per Capita: %d\n", (int) capita1 > capita2);
    printf("Densidade Populacional (Menor vence): %d\n", (int) densidade1 < densidade2);
    printf("Super Poder: %d\n", (int) superpoder1 > superpoder2);



    return 0;
}
