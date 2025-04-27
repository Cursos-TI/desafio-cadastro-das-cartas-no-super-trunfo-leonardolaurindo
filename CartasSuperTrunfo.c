#include <stdio.h>

// Desenvolvimento inicial do jogo de Super Trunfo.
// Nessa etapa do projeto, teremos somente duas cartas, e iremos exibir as cartas após pegar todos os dados necessarios.

int main()
{
    // Declaro as variaveis para as duas cartas
    char estado_carta1, estado_carta2, codigo_carta1[4], codigo_carta2[4], nome_cidade_carta1[50], nome_cidade_carta2[50];
    int populacao_carta1, populacao_carta2, pontos_turisticos_carta1, pontos_turisticos_carta2;
    float area_carta1, area_carta2, pib_carta1, pib_carta2;

    // Cabeçalho para o usuario
    printf("\n=====| SUPER TRUNFO DE PAÍSES - CADASTRO DE CARTAS |=====\n\n");
    printf("Você irá cadastrar 2 cartas para o jogo.\nVamos lá?\n\n");

    // ===== CADASTRO DA CARTA 1 =====
    printf("===== CADASTRO DA CARTA 1 =====\n");

    printf("Digite o estado da carta 1 (letra de A a H): ");
    scanf(" %c", &estado_carta1);
    printf("======================================================\n\n");

    printf("Digite o código da carta 1 (formato: X00, ex: A01, B02, C03): ");
    scanf("%s", codigo_carta1);
    printf("======================================================\n\n");

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", nome_cidade_carta1);
    printf("======================================================\n\n");

    printf("Digite a população da carta 1 (habitantes, somente numeros): ");
    scanf("%d", &populacao_carta1);
    printf("======================================================\n\n");

    printf("Digite a área da carta 1 (km²): ");
    scanf("%f", &area_carta1);
    printf("======================================================\n\n");

    printf("Digite o PIB da carta 1 (bilhões de reais): ");
    scanf("%f", &pib_carta1);
    printf("======================================================\n\n");

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos_carta1);
    printf("======================================================\n\n");

    printf("\nCarta 1 cadastrada com sucesso!\n\n");

    // ===== CADASTRO DA CARTA 2 =====
    printf("===== CADASTRO DA CARTA 2 =====\n");

    printf("Digite o estado da carta 2 (letra de A a H): ");
    scanf(" %c", &estado_carta2);
    printf("======================================================\n\n");

    printf("Digite o código da carta 2 (formato: X00, ex: A01, B02, C03): ");
    scanf("%s", codigo_carta2);
    printf("======================================================\n\n");

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", nome_cidade_carta2);
    printf("======================================================\n\n");

    printf("Digite a população da carta 2 (habitantes, somente numeros): ");
    scanf("%d", &populacao_carta2);
    printf("======================================================\n\n");

    printf("Digite a área da carta 2 (km²): ");
    scanf("%f", &area_carta2);
    printf("======================================================\n\n");

    printf("Digite o PIB da carta 2 (bilhões de reais): ");
    scanf("%f", &pib_carta2);
    printf("======================================================\n\n");

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos_carta2);
    printf("======================================================\n\n");

    printf("\nCarta 2 cadastrada com sucesso!\n\n");

    // ===== EXIBIÇÃO DAS CARTAS CADASTRADAS =====
    printf("===== CARTAS CADASTRADAS =====\n\n");

    // Exibição da primeira carta
    printf("| Carta 1:\n");
    printf("| Estado: %c\n", estado_carta1);
    printf("| Código: %s\n", codigo_carta1);
    printf("| Nome da Cidade: %s\n", nome_cidade_carta1);
    printf("| População: %d\n", populacao_carta1);
    printf("| Área: %.2f km²\n", area_carta1);
    printf("| PIB: %.2f bilhões de reais\n", pib_carta1);
    printf("| Número de Pontos Turísticos: %d\n", pontos_turisticos_carta1);

    printf("\n======================================================\n\n");

    // Exibição da segunda carta
    printf("| Carta 2:\n");
    printf("| Estado: %c\n", estado_carta2);
    printf("| Código: %s\n", codigo_carta2);
    printf("| Nome da Cidade: %s\n", nome_cidade_carta2);
    printf("| População: %d\n", populacao_carta2);
    printf("| Área: %.2f km²\n", area_carta2);
    printf("| PIB: %.2f bilhões de reais\n", pib_carta2);
    printf("| Número de Pontos Turísticos: %d\n", pontos_turisticos_carta2);

    return 0;
}