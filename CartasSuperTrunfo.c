#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){ 
    printf("Desafio Cartas Super Trunfo!\n");
    //printf("Novo Commit\n");
    //printf("novo commit\n");
    
    char estado[3];       
    char codigo[10];      
    char cidade[100];    
    int populacao;        
    float area_km2;       
    float pib;           
    int pontos_turisticos;
    float area_da_cidade;
    float Densidade_Populacional = populacao / area_da_cidade;
    float pib_per_capita = pib / populacao;

  
    printf("Digite o estado (sigla): ");
    scanf("%2s", estado);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    
    while (getchar() != '\n');

    printf("Digite o nome da cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0;
    
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area_km2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    
    printf("\n===== Carta Super Trunfo Cadastrada =====\n");

    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Cidade: %s\n", cidade);

    printf("População: %d habitantes\n", populacao);

    printf("Área: %.2f km²\n", area_km2);

    printf("PIB: R$ %.2f bilhões\n", pib);

    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    printf("Densidade Populacional: %.2f\n", Densidade_Populacional);

    printf("Pib Per Capita: %.2f\n", pib_per_capita);

    printf("=========================================\n");
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
