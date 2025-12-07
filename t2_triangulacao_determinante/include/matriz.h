#ifndef MATRIZ_H
#define MATRIZ_H

#define MAX_DIM 5
#define TAG_MATRIZ "LOG_MATRIZ"

/**
 * @brief Função responsável por fazer leitura de uma matriz
 * 
 * Esta função lê os elementos de uma matriz quadrada 
 * de dimensão MAX_DIM x MAX_DIM armazenando os valores na matriz fornecida.
 * 
 * @param m Matriz de dimensão MAX_DIM x MAX_DIM onde os valores serão armazenados
 */
void leitura_matriz(double m[MAX_DIM][MAX_DIM]);

/**
 * @brief Função responsável por imprimir uma matriz
 * 
 * Esta função imprime os elementos de uma matriz quadrada formatados
 * de forma legível na saída padrão.
 * 
 * @param m Matriz de dimensão MAX_DIM x MAX_DIM a ser impressa
 */
void impressao_matriz(double m[MAX_DIM][MAX_DIM]);

int troca_linha(double m[MAX_DIM][MAX_DIM], int linha1, int linha2);

#endif