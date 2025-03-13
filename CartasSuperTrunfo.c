#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Daniel

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigoCarta[32];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int qtdPtsTuristicos;
    printf("Digite a letra que representa o estado escolhido:\n");
    scanf("%c", &estado);
    fflush(stdin);
    printf("Digite código da sua carta:\n");
    scanf("%s", codigoCarta);
    printf("Digite o nome da cidade escolhida:");
    fflush(stdin);
    fgets(cidade, sizeof(cidade), stdin);
    printf("%s", cidade);
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
