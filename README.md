# # README - Calculadora de Rendimento de Renda Fixa

## Descrição do Projeto

Este projeto é uma **Calculadora de Rendimento de Renda Fixa** que permite cadastrar produtos de investimento em renda fixa, simular seus rendimentos com base na taxa de juros anual e prazo, salvar e carregar as simulações em arquivos binários, além de gerar relatórios detalhados em arquivos de texto.

## Funcionalidades

1. **Cadastro de Produtos de Renda Fixa**: Você pode cadastrar diferentes produtos, informando nome, valor inicial, taxa de juros e prazo.
2. **Simulação de Rendimentos**: Simula o rendimento de cada produto ao longo do prazo informado, usando a fórmula de juros compostos.
3. **Salvar Simulações**: As simulações podem ser salvas em um arquivo binário (`renda_fixa.bin`).
4. **Carregar Simulações**: Caso o arquivo `renda_fixa.bin` exista, ele será carregado automaticamente na inicialização.
5. **Gerar Relatório**: Gera um relatório em formato `.txt` com os detalhes das simulações realizadas.

## Como Usar

### Requisitos

- Compilador C (GCC, Clang ou outro compatível)
- Sistema Operacional: Windows, Linux ou macOS

### Compilação

1. Baixe ou clone o repositório contendo o código.
2. Abra um terminal ou prompt de comando na pasta do projeto.
3. Compile o código usando o comando:
   ```bash
   gcc calculadora_renda_fixa.c -o calculadora_renda_fixa -lm
   ```
   O argumento `-lm` é necessário para vincular a biblioteca matemática.

### Execução

Após compilar, execute o programa:

```bash
./calculadora_renda_fixa
```

### Funcionalidades do Menu

Ao executar o programa, você verá um menu com as seguintes opções:

1. **Cadastrar produto de renda fixa**: Insira o nome do produto, valor inicial, taxa de juros anual e prazo (em meses).
   
2. **Simular rendimento**: Calcula o rendimento de cada produto cadastrado e exibe o valor final ao fim do prazo e o total de juros gerados.

3. **Salvar simulações**: Salva os produtos e suas informações em um arquivo binário (`renda_fixa.bin`) para serem carregados futuramente.

4. **Gerar relatório**: Cria um relatório de texto (`relatorio_renda_fixa.txt`) com os detalhes de todos os produtos cadastrados e seus rendimentos.

5. **Sair**: Encerra o programa.

### Observações

- **Carregar Simulações**: Ao iniciar o programa, ele tentará carregar o arquivo `renda_fixa.bin` se ele existir. Caso contrário, será iniciado sem dados.
- **Limite de Produtos**: O programa permite o cadastro de até 100 produtos de investimento. Caso atinja esse limite, será exibida uma mensagem de aviso.

## Exemplo de Uso

### Exemplo 1 - Cadastrar um Produto
```bash
Nome do produto de renda fixa: Tesouro Direto
Valor inicial: 1000.00
Taxa de juros anual (em %): 6.0
Prazo (em meses): 24
```

### Exemplo 2 - Simular Rendimento
```bash
--- Simulação de Rendimento ---
Produto: Tesouro Direto
Valor Inicial: 1000.00
Valor Final (após 24 meses): 1126.82
Rendimento Total: 126.82
```

### Exemplo 3 - Gerar Relatório

Conteúdo do arquivo `relatorio_renda_fixa.txt`:
```
--- Relatório de Simulações de Renda Fixa ---
Produto: Tesouro Direto
Valor Inicial: 1000.00
Valor Final (após 24 meses): 1126.82
Rendimento Total: 126.82
-----------------------------------
```

## Estrutura do Código

- **Struct `RendaFixa`**: Armazena as informações do produto (nome, valor inicial, taxa de juros e prazo).
- **Funções**:
  - `cadastrarInvestimento`: Registra um novo investimento.
  - `simularRendimento`: Realiza a simulação de rendimento de cada produto.
  - `salvarSimulacoes`: Salva os investimentos em um arquivo binário.
  - `carregarSimulacoes`: Carrega as simulações previamente salvas do arquivo binário.
  - `gerarRelatorio`: Gera um relatório em arquivo de texto com as informações dos rendimentos simulados.

## Arquivos Gerados

- **renda_fixa.bin**: Arquivo binário contendo os dados dos produtos cadastrados e simulados.
- **relatorio_renda_fixa.txt**: Relatório gerado em formato de texto com o resumo das simulações realizadas.

