#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado01, Estado02, Codigo01[10], Codigo02[10], Cidade01[50], Cidade02[50];
  int Populacao01, Populacao02, Numturistico01, Numturistico02;
  float Area01, Area02, pib01, pib02;

  // Área para entrada de dados
  // Entrada de dados da primeira carta
  printf ("Olá jogador, vamos começar o jogo: Super Trunfo de Países\n");

  printf ("Coloque as informações das cartas abaixo, conforme as instruções\n");

  printf ("Vamos começar com a primeira carta, digite o Estado (Uma letra de 'A' a 'H'): \n");
  scanf ("%c", &Estado01);

  printf ("O código da carta (A letra do estado seguida de um número de 01 a 04): \n");
  scanf ("%s", Codigo01);

  printf ("Nome da cidade: \n");
  scanf("%s", Cidade01);

  printf ("A população da cidade: \n");
  scanf ("%d", &Populacao01);

  printf ("A área da cidade (em km²): \n");
  scanf ("%f", &Area01);

  printf ("O PIB da cidade: \n");
  scanf ("%f", &pib01);

  printf ("O número de pontos turísticos na cidade: \n");
  scanf ("%d", &Numturistico01);

  // Entrada de dados da segunda carta
  printf ("Agora vamos para a segunda carta... \n");
  
  printf ("O Estado, uma letra de 'A' a 'H': \n");
  scanf ("%c", &Estado02);

  printf ("O código da carta (A letra do estado seguida de um número de 01 a 04): \n");
  scanf ("%s", Codigo02);

  printf ("Nome da cidade: \n");
  scanf("%s", Cidade02);

  printf ("A população da cidade: \n");
  scanf ("%d", &Populacao02);

  printf ("A área da cidade (em km²): \n");
  scanf ("%f", &Area02);

  printf ("O PIB da cidade: \n");
  scanf ("%f", &pib02);

  printf ("O número de pontos turísticos na cidade: \n");
  scanf ("%d", &Numturistico02);

  // Área para exibição dos dados da cidade

return 0;
} 
