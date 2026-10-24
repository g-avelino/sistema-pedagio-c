# 🚗 Controle de Pedágio em Linguagem C

Projeto desenvolvido para a disciplina **Algoritmos e Pensamento Computacional**, com foco na utilização de **vetores**, **matrizes**, **estruturas de repetição** e **estruturas condicionais** na linguagem C.

## 📖 Sobre o Projeto

O sistema simula o controle de veículos em uma praça de pedágio durante uma semana. Os dados informados pelo usuário são armazenados em um vetor e posteriormente processados para gerar estatísticas sobre o fluxo de veículos.

O projeto foi desenvolvido com o objetivo de aplicar conceitos fundamentais da programação estruturada, demonstrando como vetores e laços de repetição podem ser utilizados para manipular e organizar dados de forma eficiente.

---

## 🎯 Objetivos

- Aplicar conceitos de vetores e matrizes.
- Utilizar estruturas de repetição (`for`).
- Utilizar estruturas condicionais (`if`).
- Realizar entrada, processamento e saída de dados.
- Desenvolver lógica de programação para resolver problemas reais.
- Organizar o código utilizando boas práticas de programação.

---

## 🛠️ Tecnologias Utilizadas

- Linguagem C
- Compilador GCC
- Visual Studio Code (ou outro ambiente de desenvolvimento)

---

## 📂 Estrutura de Dados

### Vetor

```c
int carrosSemana[7];
```

Responsável por armazenar a quantidade de carros registrada em cada dia da semana.

### Matriz

```c
char diasSemana[7][15];
```

Responsável por armazenar os nomes dos dias da semana para facilitar a exibição dos resultados.

---

## ⚙️ Funcionalidades

✅ Cadastro da quantidade de veículos por dia da semana.

✅ Cálculo do total de veículos registrados.

✅ Cálculo da média diária de veículos.

✅ Identificação automática do dia com maior movimento.

✅ Exibição de relatório formatado no terminal.

✅ Destaque especial para o dia de maior fluxo de veículos.

---

## 📋 Lógica Implementada

O programa utiliza três etapas principais:

### 1. Entrada de Dados

Um laço `for` percorre o vetor solicitando ao usuário a quantidade de carros registrada em cada dia da semana.

### 2. Processamento

Outro laço `for` calcula:

- Total de veículos da semana;
- Média diária;
- Maior fluxo registrado;
- Dia correspondente ao maior fluxo.

### 3. Exibição

Os resultados são apresentados de forma organizada no terminal, destacando o dia com maior movimentação.

---

## 🖥️ Exemplo de Execução

### Entrada

```text
150
180
220
195
310
280
250
```

### Saída

```text
====================================
       RELATORIO SEMANAL
====================================

Segunda: 150 carros
Terca: 180 carros
Quarta: 220 carros
Quinta: 195 carros
Sexta: 310 carros <<< DIA DE MAIOR MOVIMENTO >>>
Sabado: 280 carros
Domingo: 250 carros

====================================
             RESUMO
====================================
Total de carros na semana: 1585
Media diaria de carros: 226.43
Dia de maior movimento: Sexta
Quantidade de carros no pico: 310
```

---

## 🚀 Como Executar

### Compilar

```bash
gcc pedagio.c -o pedagio
```

### Executar

```bash
./pedagio
```

No Windows:

```bash
pedagio.exe
```

---

## 📚 Conceitos Aplicados

- Variáveis
- Vetores
- Matrizes
- Estruturas condicionais
- Estruturas de repetição
- Entrada e saída de dados
- Operadores relacionais
- Processamento de informações
- Organização e documentação de código

---

## 🎓 Aprendizados

Este projeto contribuiu para o desenvolvimento do raciocínio lógico e da capacidade de modelar problemas reais utilizando programação. Além disso, possibilitou a prática da manipulação de vetores, do uso de laços de repetição e da criação de relatórios formatados para exibição no terminal.

---

## 👨‍💻 Autor

**Guilherme Avelino**

Projeto desenvolvido para fins acadêmicos na disciplina **Algoritmos e Pensamento Computacional**.
