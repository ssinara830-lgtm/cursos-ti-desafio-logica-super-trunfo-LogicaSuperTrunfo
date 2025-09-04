#include <stdio.h>

int main() {
    printf("=== SISTEMA DE COMPARACAO DE CIDADES ===\n\n");
    
    // Variáveis para a primeira cidade
    char estado1[50], nome1[50];
    int codigo1, pontos_turisticos1;
    long populacao1, pib1;
    float area1;
    
    // Variáveis para a segunda cidade
    char estado2[50], nome2[50];
    int codigo2, pontos_turisticos2;
    long populacao2, pib2;
    float area2;
    
    // CADASTRO DA PRIMEIRA CARTA
    printf("--- PRIMEIRA CARTA ---\n");
    
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1);
    
    printf("Digite o codigo da carta: ");
    scanf("%d", &codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    
    printf("Digite a populacao: ");
    scanf("%ld", &populacao1);
    
    printf("Digite a area (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB: ");
    scanf("%ld", &pib1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n");
    
    // CADASTRO DA SEGUNDA CARTA
    printf("--- SEGUNDA CARTA ---\n");
    
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2);
    
    printf("Digite o codigo da carta: ");
    scanf("%d", &codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    
    printf("Digite a populacao: ");
    scanf("%ld", &populacao2);
    
    printf("Digite a area (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB: ");
    scanf("%ld", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // EXIBIÇÃO DAS CARTAS CADASTRADAS
    printf("\n=== CARTAS CADASTRADAS ===\n");
    
    printf("\nCARTA 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %d\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("Populacao: %ld\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %ld\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    
    printf("\nCARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %d\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("Populacao: %ld\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %ld\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    
    // COMPARAÇÃO DAS CARTAS
    printf("\n=== RESULTADO DA COMPARACAO ===\n");
    
    // Escolha do critério de comparação (altere este valor para mudar o critério)
    int criterio = 3; // 1=População, 2=Área, 3=PIB, 4=Pontos Turísticos, 5=Densidade
    
    if(criterio == 1) {
        // Comparação por POPULAÇÃO
        printf("Critério: MAIOR POPULACAO\n");
        if(populacao1 > populacao2) {
            printf("VENCEDORA: %s (%ld habitantes)\n", nome1, populacao1);
        } else if(populacao2 > populacao1) {
            printf("VENCEDORA: %s (%ld habitantes)\n", nome2, populacao2);
        } else {
            printf("EMPATE! Ambas têm %ld habitantes\n", populacao1);
        }
    }
    else if(criterio == 2) {
        // Comparação por ÁREA
        printf("Critério: MAIOR AREA\n");
        if(area1 > area2) {
            printf("VENCEDORA: %s (%.2f km²)\n", nome1, area1);
        } else if(area2 > area1) {
            printf("VENCEDORA: %s (%.2f km²)\n", nome2, area2);
        } else {
            printf("EMPATE! Ambas têm %.2f km²\n", area1);
        }
    }
    else if(criterio == 3) {
        // Comparação por PIB
        printf("Critério: MAIOR PIB\n");
        if(pib1 > pib2) {
            printf("VENCEDORA: %s (PIB: %ld)\n", nome1, pib1);
        } else if(pib2 > pib1) {
            printf("VENCEDORA: %s (PIB: %ld)\n", nome2, pib2);
        } else {
            printf("EMPATE! Ambas têm PIB de %ld\n", pib1);
        }
    }
    else if(criterio == 4) {
        // Comparação por PONTOS TURÍSTICOS
        printf("Critério: MAIS PONTOS TURISTICOS\n");
        if(pontos_turisticos1 > pontos_turisticos2) {
            printf("VENCEDORA: %s (%d pontos)\n", nome1, pontos_turisticos1);
        } else if(pontos_turisticos2 > pontos_turisticos1) {
            printf("VENCEDORA: %s (%d pontos)\n", nome2, pontos_turisticos2);
        } else {
            printf("EMPATE! Ambas têm %d pontos turísticos\n", pontos_turisticos1);
        }
    }
    else if(criterio == 5) {
        // Comparação por DENSIDADE POPULACIONAL (menor vence)
        printf("Critério: MENOR DENSIDADE POPULACIONAL\n");
        float densidade1 = populacao1 / area1;
        float densidade2 = populacao2 / area2;
        
        if(densidade1 < densidade2) {
            printf("VENCEDORA: %s (%.2f hab/km²)\n", nome1, densidade1);
        } else if(densidade2 < densidade1) {
            printf("VENCEDORA: %s (%.2f hab/km²)\n", nome2, densidade2);
        } else {
            printf("EMPATE! Ambas têm densidade de %.2f hab/km²\n", densidade1);
        }
    }
    else {
        printf("Critério inválido! Escolha um número de 1 a 5.\n");
    }
    
    printf("\n=== FIM DO PROGRAMA ===\n");
    return 0;
}
