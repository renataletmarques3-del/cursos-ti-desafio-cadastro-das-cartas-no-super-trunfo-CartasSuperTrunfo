#include <stdio.h>

int main(){

    int turismo1, opcao1, opcao2;
    int resultado1, resultado2;
    unsigned long int populacao1;
    char nome1[30], codigo1[4], letra1, atributo1, atributo2;
    float area1, pib1, densidade1, ppc1, superpoder1;

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
    scanf("%u", &populacao1);

    printf("Quantos pontos turísticos tem na cidade?");
    scanf("%d", &turismo1);

    densidade1 = populacao1 / area1;
    ppc1 = pib1 / populacao1;
    superpoder1 = area1 + pib1 + populacao1 + turismo1 + ppc1 + (1/densidade1);


    printf("\nCADASTRO DA CARTA 2\n");

    int turismo2;
    unsigned long int populacao2;
    char nome2 [30], codigo2[4], letra2;
    float area2, pib2, densidade2, ppc2, superpoder2;

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
    scanf("%u", &populacao2);

    printf("Quantos pontos turísticos tem na cidade?");
    scanf("%d", &turismo2);

    densidade2 = populacao2 / area2;
    ppc2 = pib2 / populacao2;
    superpoder2 = area2 + pib2 + populacao2 + turismo2 + ppc2 + (1/densidade2);

    printf("\nCadastro da carta 1\n");
    printf("1. Estado: %c\n", letra1);
    printf("2. Código: %s\n", codigo1);
    printf("3. Nome da Cidade: %s\n", nome1);
    printf("4. População: %u\n", populacao1);
    printf("5. Área: %f km²\n", area1);
    printf("6. PIB: %f bilhões de reais\n", pib1);
    printf("7. Número de Pontos Turísticos: %d\n", turismo1);
    printf("8. Densidade Populacional: %f hab/km²\n", densidade1);
    printf("9. PIB per Capita: %f reais\n", ppc1);
    printf("10. Super Poder: %.2f\n", superpoder1);


    printf("\nCadastro da carta 2\n");
    printf("1. Estado: %c\n", letra2);
    printf("2. Código: %s\n", codigo2);
    printf("3. Nome da Cidade: %s\n", nome2);
    printf("4. População: %u\n", populacao2);
    printf("5. Área: %f km²\n", area2);
    printf("6. PIB: %f bilhões de reais\n", pib2);
    printf("7. Número de Pontos Turísticos: %d\n", turismo2);
    printf("8. Densidade Populacional: %f hab/km²\n", densidade2);
    printf("9. PIB per Capita: %f reais\n", ppc2);
    printf("10. Super Poder: %.2f\n", superpoder2);

    printf("\n### Qual atributo você quer comparar entre as duas cartas? ###\n");
    printf("Você tem as seguintes opções: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("### Digite sua opção: ###");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        resultado1=(populacao1>populacao2)? 1:0;
            printf ("\nVocê escolheu o atributo População\n");
        break;
    case 2:
        resultado1=(area1>area2)? 1:0;
            printf ("\nVocê escolheu o atributo Área\n");
        break;
    case 3:
        resultado1=(pib1>pib2)? 1:0;
            printf ("\nVocê escolheu o atributo PIB\n");
        break;        
    case 4:
        resultado1=(turismo1>turismo2)? 1:0;
            printf ("\nVocê escolheu o atributo turismo\n");   
        break;            
    case 5:
        resultado1=(densidade1<densidade2)? 1:0;
            printf ("\nVocê escolheu o atributo densidade\n");        
        break;
    case 6:
        resultado1=(ppc1>ppc2)? 1:0;
            printf ("\nVocê escolheu o atributo PIB per capita\n");         
        break;
    case 7:
        resultado1=(superpoder1<superpoder2)? 1:0;
            printf ("\nVocê escolheu o atributo Super poder\n");        
        break;
        }
    printf("\n### Qual atributo você quer comparar entre as duas cartas? ###\n");
    printf("(Você não pode escolher o mesmo atributo da jogada anterior)");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("### Digite sua opção: ###");
    scanf("%d", &opcao2);

    if (opcao2==opcao1){
        printf("\nVocê escolheu o mesmo atributo!\n"); 
    }else{;
        switch (opcao2)
        {
        case 1:
            resultado2=(populacao1>populacao2)? 1:0;
                printf ("\nVocê escolheu o atributo População\n");
            break;
        case 2:
            resultado2=(area1>area2)? 1:0;
                printf ("\nVocê escolheu o atributo Área\n");
            break;
        case 3:
            resultado2=(pib1>pib2)? 1:0;
                printf ("\nVocê escolheu o atributo PIB\n");
            break;        
        case 4:
           resultado2=(turismo1>turismo2)? 1:0;
                printf ("\nVocê escolheu o atributo turismo\n");      
           break;            
        case 5:
            resultado2=(densidade1<densidade2)? 1:0;
                printf ("\nVocê escolheu o atributo densidade\n");         
            break;
        case 6:
            resultado2=(ppc1>ppc2)? 1:0;
                printf ("\nVocê escolheu o atributo PIB per capita\n");          
            break;
        case 7:
            resultado2=(superpoder1<superpoder2)? 1:0;
                printf ("\nVocê escolheu o atributo Super poder\n");         
          break;
        
        }}

        if (resultado1==resultado2){
            if (resultado1==1){
                printf("A carta 1 ganhou essa rodada!\n");
            }else if(resultado1==0){
                printf("A carta 2 ganhou essa rodada!\n");    
            }    
            else{
                printf("Deu empate!\n");
            }
            }
    getchar();
    printf("Pressione ENTER para sair...");

    }
