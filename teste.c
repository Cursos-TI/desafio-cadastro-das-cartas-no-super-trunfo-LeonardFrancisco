#include <stdio.h>
#include <string.h>

#define ESTADOS 8
#define CIDADES_POR_ESTADO 4
#define TOTAL_CIDADES (ESTADOS * CIDADES_POR_ESTADO)

// Estrutura para armazenar os dados das cidades
typedef struct {
    char codigo[4];  // Código da cidade (exemplo: "A01", "B02")
    char nome_cidade[20];  // Nome da cidade
    int populacao;  // População da cidade
    float area;  // Área da cidade em km²
    float pib;  // PIB da cidade em bilhões
    float densidade;  // Densidade Populacional
    float pib_percapita;  // PIB per capita
    int pontos_turisticos;  // Número de pontos turísticos
} Cidade;

int main() {
    Cidade cidades[TOTAL_CIDADES];  // Array para armazenar as cidades
    char estados[ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int posicao = 0;

    printf("=== Cadastro de Cartas - Super Trunfo ===\n");

    // Loop para percorrer todos os estados
    for (int i = 0; i < ESTADOS; i++) {
        // Loop para cadastrar as 4 cidades de cada estado
        for (int j = 0; j < CIDADES_POR_ESTADO; j++) {
            sprintf(cidades[posicao].codigo, "%c%02d", estados[i], j + 1);
            sprintf(cidades[posicao].nome_cidade, "Cidade_%c%d", estados[i], j + 1);

            // Definição automática dos valores
            cidades[posicao].populacao = (i + 1) * 100000 + (j + 1) * 5000;
            cidades[posicao].area = (i + 1) * 50.5 + j * 10.2;
            cidades[posicao].pib = (i + 1) * 1.5 + j * 0.2;
            cidades[posicao].pontos_turisticos = (i + 1) * 2 + j;
            cidades[posicao].densidade = cidades[posicao].populacao / cidades[posicao].area;
            cidades[posicao].pib_percapita = cidades[posicao].pib / cidades[posicao].populacao;

            posicao++;  // Avançar a posição do array
        }
    }

    // Exibição das cidades cadastradas
    printf("\n=== Cartas Cadastradas ===\n");

    for (int i = 0; i < TOTAL_CIDADES; i++) {
        printf("\n-------------------------\n");
        printf("Código: %s\n", cidades[i].codigo);
        printf("Nome: %s\n", cidades[i].nome_cidade);
        printf("População: %d\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f bilhões de reais\n", cidades[i].pib);
        printf("Número de pontos turísticos: %d\n", cidades[i].pontos_turisticos);
        printf("Densidade Populacional: %.2f hab/km²\n", cidades[i].densidade);
        printf("PIB per Capita: %.6f bilhões/hab\n", cidades[i].pib_percapita);
    }

    return 0;
}
