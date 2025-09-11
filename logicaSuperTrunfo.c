#include <stdio.h>
#include <string.h> 

int main() {

    char estado1;
    char codigo1[4];
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;      
    float pib_percapita1;

    char estado2;
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_percapita2; 
    
    int opcao1, opcao2; // Menu interativo
    
    // Escolhas do usuário
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    char nome_atributo1[50];
    char nome_atributo2[50];
    float soma_carta1, soma_carta2;


    printf("Super Trunfo - Cadastro de 2 cartas\n");
    printf("Insira as informações para cadastro das cartas conforme solicitado:\n\n");

    // Dados Carta 1
    printf("Cadastrando Carta 1...\n");
    printf("Estado (ex A-H): ");
    scanf(" %c", &estado1);        

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);        

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", cidade1);   

    printf("População (número inteiro, ex: 600000): ");
    scanf("%d", &populacao1);

    printf("Área (em km², ex: 1342.34): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais, ex: 15.81): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos (inteiro, ex: 25): ");
    scanf("%d", &pontos_turisticos1);

    densidade1 = (float)populacao1 / area1;
    pib_percapita1 = (pib1 * 1000000000) / (float)populacao1;

    printf("\n");

    // Dados Carta 2
    printf("Cadastrando Carta 2...\n");
    printf("Estado ((ex A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex A-H): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", cidade2);

    printf("População (número inteiro, ex: 12000000): ");
    scanf("%d", &populacao2);

    printf("Área (em km², ex: 1521.11): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais, ex: 699.28): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos (inteiro, ex: 150): ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;
    pib_percapita2 = (pib2 * 1000000000) / (float)populacao2;

    printf("\n\n");

    // Menus interativos - Escolher atributos
    printf("--------------------------------------\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("--------------------------------------\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence individualmente)\n");
    printf("--------------------------------------\n");
    printf("Sua opção: ");
    scanf("%d", &opcao1);

    printf("\n--------------------------------------\n");
    printf("Escolha o SEGUNDO atributo para comparar:\n");
    printf("--------------------------------------\n");

    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence individualmente)\n");
    printf("--------------------------------------\n");
    printf("--------------------------------------\n");
    printf("Sua opção: ");
    scanf("%d", &opcao2);

    while (opcao1 == opcao2) { // Garante atributos diferentes
        printf("\nErro: Você não pode escolher o mesmo atributo duas vezes.\n");
        printf("Por favor, escolha um segundo atributo diferente: ");
        scanf("%d", &opcao2);
    }
    
    switch (opcao1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            strcpy(nome_atributo1, "População");
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            strcpy(nome_atributo1, "Área (km²)");
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            strcpy(nome_atributo1, "PIB (Bilhões R$)");
            break;
        case 4:
            valor1_carta1 = pontos_turisticos1;
            valor1_carta2 = pontos_turisticos2;
            strcpy(nome_atributo1, "Pontos Turísticos");
            break;
        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            strcpy(nome_atributo1, "Densidade (hab/km²)");
            break;
    }

    switch (opcao2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            strcpy(nome_atributo2, "População");
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            strcpy(nome_atributo2, "Área (km²)");
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            strcpy(nome_atributo2, "PIB (Bilhões R$)");
            break;
        case 4:
            valor2_carta1 = pontos_turisticos1;
            valor2_carta2 = pontos_turisticos2;
            strcpy(nome_atributo2, "Pontos Turísticos");
            break;
        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            strcpy(nome_atributo2, "Densidade (hab/km²)");
            break;
    }
    
    // Soma dos valores dos atributos para cada carta
    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    printf("\n\n");
    printf("      RESULTADO DA COMPARAÇÃO\n");
    printf("\n\n");

    // Carta 1
    printf("Carta 1: %s (%c)\n", cidade1, estado1);
    printf(" - %s: %.2f\n", nome_atributo1, valor1_carta1);
    printf(" - %s: %.2f\n", nome_atributo2, valor2_carta1);
    printf(" -> SOMA TOTAL: %.2f\n\n", soma_carta1);

    // Carta 2 
    printf("Carta 2: %s (%c)\n", cidade2, estado2);
    printf(" - %s: %.2f\n", nome_atributo1, valor1_carta2);
    printf(" - %s: %.2f\n", nome_atributo2, valor2_carta2);
    printf(" -> SOMA TOTAL: %.2f\n\n", soma_carta2);
    
    printf("----------------------------------------\n");

    // Resultado final
    if (soma_carta1 > soma_carta2) {
        printf("Resultado Final: CARTA 1 (%s) VENCEU!\n", cidade1);
    } else if (soma_carta2 > soma_carta1) {
        printf("Resultado Final: CARTA 2 (%s) VENCEU!\n", cidade2);
    } else {
        printf("Resultado Final: EMPATE!\n");
    }
    printf("----------------------------------------\n");

    return 0;
}