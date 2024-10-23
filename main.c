#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// STRUCT para o produto de renda fixa 
typedef struct {
    char nome[50];
    float valor_inicial;
    float taxa_juros; // %%%
    int prazo;        // tempo(meses)
} RendaFixa;

#define MAX_INVESTIMENTOS 100

// funcoes para a ultilização da calculadora 
void cadastrarInvestimento(RendaFixa *investimentos, int *total);
void simularRendimento(RendaFixa *investimentos, int total);
void salvarSimulacoes(RendaFixa *investimentos, int total);
void carregarSimulacoes(RendaFixa *investimentos, int *total);
void gerarRelatorio(RendaFixa *investimentos, int total);