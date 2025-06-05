#include <stdio.h> // 

int main() {
    // Variáveis para armazenar os dados da Carta 1
    char codigo1[4];             // Código da cidade (ex: A01)
    int populacao1;              // População da cidade
    float area1;                 // Área da cidade em km²
    float pib1;                  // PIB da cidade em bilhões
    int pontosTuristicos1;       // Número de pontos turísticos

    // Variáveis para armazenar os dados da Carta 2
    char codigo2[4];             // Código da cidade (ex: B02)
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Código da cidade (ex: A01): ");
    scanf("%3s", codigo1); 
    printf("População: ");
    scanf("%d", &populacao1); 
    printf("Área (km²): ");
    scanf("%f", &area1); 
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Código da cidade (ex: B02): ");
    scanf("%3s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibindo os dados da Carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", codigo1);                  
    printf("População: %d\n", populacao1);            
    printf("Área: %.2f km²\n", area1);               
    printf("PIB: %.2f bilhões\n", pib1);              
    printf("Pontos turísticos: %d\n", pontosTuristicos1); 

    // Exibindo os dados da Carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0; 
}
