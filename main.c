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

int main() {
    RendaFixa investimentos[MAX_INVESTIMENTOS];
    int totalInvestimentos = 0;
    int opcao;

    carregarSimulacoes(investimentos, &totalInvestimentos);

    do {
        printf("\n--- Calculadora de Rendimento de Renda Fixa ---\n");
        printf("1. Cadastrar produto de renda fixa\n");
        printf("2. Simular rendimento\n");
        printf("3. Salvar simulações\n");
        printf("4. Gerar relatório\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarInvestimento(investimentos, &totalInvestimentos);
                break;
            case 2:
                simularRendimento(investimentos, totalInvestimentos);
                break;
            case 3:
                salvarSimulacoes(investimentos, totalInvestimentos);
                break;
            case 4:
                gerarRelatorio(investimentos, totalInvestimentos);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}