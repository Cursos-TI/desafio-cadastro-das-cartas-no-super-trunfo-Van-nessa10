#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Vanessa Andrade

int main() {
    // Dados da primeira carta
    char codigo1[4] = "A01";  // Código da primeira carta
    int populacao1 = 1500000;  // População da cidade
    float area1 = 250.45;      // Área da cidade
    float pib1 = 500000000000.00;  // PIB da cidade
    int pontos_turisticos1 = 10;   // Pontos turísticos da cidade

    // Dados da segunda carta
    char codigo2[4] = "B02";  // Código da segunda carta
    int populacao2 = 2000000;  // População da cidade
    float area2 = 350.75;      // Área da cidade
    float pib2 = 700000000000.00;  // PIB da cidade
    int pontos_turisticos2 = 15;   // Pontos turísticos da cidade

    // Exibição dos dados da primeira carta
    printf("--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    return 0;
}
