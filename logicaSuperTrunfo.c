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

    printf("Super Trunfo - Cadastro de 2 cartas\n");
    printf("Insira as informações para cadastro das cartas conforme solicitado:\n\n");

    // Dados carta 1
    printf("Cadastrando Carta 1...\n");
    printf("Estado (ex A-H): ");
    scanf(" %c", &estado1);        

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);        

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", cidade1);   

    printf("População (número inteiro, ex: 85700): ");
    scanf("%d", &populacao1);

    printf("Área (em km², ex: 1521.44): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais, ex: 699.28): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos (inteiro, ex: 35): ");
    scanf("%d", &pontos_turisticos1);

    densidade1 = (float)populacao1 / area1;
    pib_percapita1 = (pib1 * 1000000000) / (float)populacao1;

    printf("\n");

    // Dados carta 2
    printf("Cadastrando Carta 2...:\n");
    printf("Estado (ex A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", cidade2);

    printf("População (número inteiro, ex: 85700): ");
    scanf("%d", &populacao2);

    printf("Área (em km², ex: 1521.44): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais, ex: 699.28): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos (inteiro, ex: 35): ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;
    pib_percapita2 = (pib2 * 1000000000) / (float)populacao2;

    printf("\n\n");
    printf("COMPARANDO CARTAS:\n\n");

    //Comparação usando o atributo PIB
    printf("Comparação de cartas (Atributo: PIB em Bilhões)\n\n");

    if (pib1 > pib2) {
        printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, pib2);
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib2 > pib1) {
        printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, pib2);
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, pib2);
        printf("\nResultado: Empate!\n");
    }
    return 0;
}