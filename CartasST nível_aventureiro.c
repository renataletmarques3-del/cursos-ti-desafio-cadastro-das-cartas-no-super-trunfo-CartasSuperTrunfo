#include <stdio.h>

int main(){

    int populacao1, turismo1;
    char nome1[30], codigo1[4], letra1;
    float area1, pib1, densidade1, ppc1;

    printf("CADASTRO DA CARTA 1\n");
    printf("Digite o nome da cidade:");
    scanf("%s", nome1);

    printf("Digite o codigo da carta:");
    scanf("%s", codigo1);

    printf("Digite a letra do Estado:");
    scanf(" %c", &letra1);

    printf("Digite a area total em km²:");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib1);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao1);

    printf("Quantos pontos turísticos tem na cidade?");
    scanf("%d", &turismo1);

    densidade1 = populacao1 / area1;
    ppc1 = pib1 / populacao1;

    while (getchar() != '\n');

    printf("\nCADASTRO DA CARTA 2\n");

    int populacao2, turismo2;
    char nome2 [30], codigo2[4], letra2;
    float area2, pib2, densidade2, ppc2;

    printf("Digite o nome da cidade:");
    scanf("%s", nome2);

    printf("Digite o código da carta:");
    scanf("%s", codigo2);

    printf("Digite a letra do Estado:");
    scanf(" %c", &letra2);

    printf("Digite a area total em km²:");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib2);

    printf("Digite a população da cidade:");
    scanf("%d", &populacao2);

    printf("Quantos pontos turísticos tem na cidade?");
    scanf("%d", &turismo2);

    densidade2 = populacao2 / area2;
    ppc2 = pib2 / populacao2;

    while (getchar() != '\n');

    printf("\nCadastro da carta 1\n");
    printf("Estado: %c\n", letra1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %f hab/km²\n", densidade1);
    printf("PIB per Capita: %f reais\n", ppc1);

    printf("\nCadastro da carta 2\n");
    printf("Estado: %c\n", letra2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %f hab/km²\n", densidade2);
    printf("PIB per Capita: %f reais\n", ppc2);

    getchar();
    printf("Pressione ENTER para sair...");

}
