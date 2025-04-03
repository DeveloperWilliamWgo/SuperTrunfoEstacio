#include <stdio.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para ler os dados da carta
void lerCarta(Carta *carta, int num) {
    printf("\nDigite os dados da Carta %d:\n", num);
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);
    
    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", carta->codigo);
    
    printf("Nome da Cidade: ");
    scanf(" %[^"]s", carta->nomeCidade);  // Lê a string com espaços
    
    printf("População: ");
    scanf(" %d", &carta->populacao);
    
    printf("Área (em km²): ");
    scanf(" %f", &carta->area);
    
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &carta->pib);
    
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &carta->pontosTuristicos);
}

// Função para exibir os dados da carta
void exibirCarta(Carta carta, int num) {
    printf("\nCarta %d:\n", num);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    Carta carta1, carta2;
    
    // Ler dados das cartas
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);
    
    // Exibir dados das cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);
    
    return 0;
}
