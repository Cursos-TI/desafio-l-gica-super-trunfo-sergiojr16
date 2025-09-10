#include <stdio.h>

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
    
    int opcao; // Utilizado na parte do menu interativo

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

    // Menu Interativo - Swtch
    printf("--------------------------------------\n");
    printf("Escolha o número do atributo a ser comparado:\n");
    printf("--------------------------------------\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("--------------------------------------\n");
    printf("Sua opção: ");
    scanf("%d", &opcao);
    
    printf("\n\n");
    printf("Comparando:\n\n");

    switch (opcao) {
        case 1: // População
            printf("Comparação de cartas (Atributo: População)\n\n");
            printf("Carta 1 - %s (%c): %d habitantes\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%c): %d habitantes\n", cidade2, estado2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 2: //  Área
            printf("Comparação de cartas (Atributo: Área em km²)\n\n");
            printf("Carta 1 - %s (%c): %.2f km²\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%c): %.2f km²\n", cidade2, estado2, area2);

            if (area1 > area2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 3: //  PIB
            printf("Comparação de cartas (Atributo: PIB em Bilhões de R$)\n\n");
            printf("Carta 1 - %s (%c): R$ %.2f Bilhões\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%c): R$ %.2f Bilhões\n", cidade2, estado2, pib2);

            if (pib1 > pib2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Comparação de cartas (Atributo: Número de Pontos Turísticos)\n\n");
            printf("Carta 1 - %s (%c): %d pontos\n", cidade1, estado1, pontos_turisticos1);
            printf("Carta 2 - %s (%c): %d pontos\n", cidade2, estado2, pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menos vence)
            printf("Comparação de cartas (Atributo: Densidade Demográfica - menor vence)\n\n");
            printf("Carta 1 - %s (%c): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%c): %.2f hab/km²\n", cidade2, estado2, densidade2);

            if (densidade1 < densidade2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;
            
        default: // Opção fora do switch
            printf("Opção inválida! Por favor, execute o programa novamente e escolha um número entre 1 e 5.\n");
            break;
    }

    return 0;
}