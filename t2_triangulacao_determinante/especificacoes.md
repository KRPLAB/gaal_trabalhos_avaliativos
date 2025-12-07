# Projeto: Método da Triangulação para Determinante de Ordem 5

**Disciplina:** Geometria Analítica e Álgebra Linear

## Descrição

Este projeto consiste em um programa desenvolvido em C para resolver determinantes de ordem 5 utilizando o Método da Triangulação. O objetivo é aplicar técnicas de álgebra linear para calcular determinantes de matrizes grandes, conforme exemplos apresentados no livro "Álgebra Linear" de Alfredo Steinbruch e Paulo Winterle (Exemplo 2, página 450 e Exemplo 3, página 453).

---

## Especificações

- O programa deve receber como entrada uma matriz 5x5 e calcular seu determinante utilizando o Método da Triangulação.
- Como exemplos para teóricos foram usados os exercícios resolvidos do livro "Álgebra Linear" de Alfredo Steinbruch e Paulo Winterle para referência do método.

---

## Como Compilar e Executar

### Em Linux ou macOS (Método Recomendado)

O repositório inclui um `Makefile` para automatizar a compilação.

1. **Abra o terminal** na pasta raiz do projeto.
2. **Para compilar**, execute o comando:
    ```bash
    make
    ```
    Isso criará um arquivo executável chamado `triangulacao_determinante`.

3. **Para executar o programa**, use o comando:
    ```bash
    ./determinante_triangulacao
    ```

4. **(Opcional) Para limpar** os arquivos gerados pela compilação, execute:
    ```bash
    make clean
    ```

### Em Windows

1. **Abra o terminal** na pasta raiz do projeto.
2. **Compile com o comando:**
    ```bash
    gcc src\main.c src\triangulacao.c -Iinclude -o triangulacao_determinante.exe -lm
    ```
3. **Execute o programa:**
    ```bash
    .\triangulacao_determinante.exe
    ```

---

## Observações

- Consulte os exemplos do livro "Álgebra Linear" de Alfredo Steinbruch e Paulo Winterle para garantir a correta implementação do método.

Dentro do diretório `src`, estão os arquivos fonte do projeto e também o arquivo `testes.json` que contém casos de teste para validação, enquanto o diretório `include` contém os arquivos de cabeçalho necessários.