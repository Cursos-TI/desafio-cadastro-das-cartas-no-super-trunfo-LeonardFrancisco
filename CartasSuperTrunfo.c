#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include <stdio.h>
#include <string.h>

#define ESTADOS 8
#define CIDADES_POR_ESTADO 4
#define TOTAL_CIDADES (ESTADOS * CIDADES_POR_ESTADO)

//Estrutura para armazenar os dados das cidades
typedef struct {
    // Código da cidade (exemplo: "A01", "B02")
    char codigo[4];
    // Nome da cidade
    char nome_cidade[20];
    // População da cidade
    int populacao;    
    // Área da cidade em km²
    float area;
    // PIB da cidade em bilhões
    float pib;
    // Número de pontos turísticos
    int pontos_turisticos;
} Cidade;

int main() {
    // Array para armazenar as cidades
    Cidade cidades[TOTAL_CIDADES];

    // Array com as letras que representam os estados (A a H)
    char estados[ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    // Variável para controlar a posição do array
    int posicao = 0;

    printf("=== Cadastro de Cartas - Super Trunfo ===\n");

    // Loop para percorrer todos os estados
    for (int i = 0; i < ESTADOS; i++) {

        // Loop para cadastrar as 4 cidades de cada estado
        for (int j = 0; j < CIDADES_POR_ESTADO; j++) {

            //Código da cidade no formato "A01", "B02", etc.
            sprintf(cidades[posicao].codigo, "%c%02d", estados[i], j + 1);
            
            printf("\n=== Cadastro da cidade: %s ===\n", cidades[posicao].codigo);
            
            //Nome da cidade
            printf("Nome da cidade: ");
            scanf("%s", cidades[posicao].nome_cidade);

            // População
            printf("População: ");
            scanf("%d", &cidades[posicao].populacao);

            // Área em km²
            printf("Área (km²): ");
            scanf("%f", &cidades[posicao].area);
                        
            // PIB
            printf("PIB: ");
            scanf("%f", &cidades[posicao].pib);
            
            // Número de pontos turísticos
            printf("Número de pontos turísticos: ");
            scanf("%d", &cidades[posicao].pontos_turisticos);
            
            // Avançar a posição do array
            posicao++;
        }
    }

    // Exibição das cidades cadastradas
    printf("\n=== Cartas Cadastradas ===\n");

    for (int i = 0; i < TOTAL_CIDADES; i++) {
        printf("\n-------------------------\n");
        // Exibir o código da cidade
        printf("Código: %s\n", cidades[i].codigo);

        // Exibir o nome da cidade
        printf("Nome: %s\n", cidades[i].nome_cidade);

        // Exibir a população
        printf("População: %d\n", cidades[i].populacao);

        // Exibir a area
        printf("Área: %.2f km²\n", cidades[i].area);

        // Exibir o pib
        printf("PIB: %f\n", cidades[i].pib);

        // Exibir o númerode pontos turísticos
        printf("Número de pontos turísticos: %d\n", cidades[i].pontos_turisticos);

        printf("\n");
        
    }

    return 0;
}
