#include <matriz.h>
#include <stdio.h>
#include <stdlib.h>

#include "triangulacao.h"

int main () {
    double matriz[MAX_DIM][MAX_DIM];
    double determinante;
    PassoTriangulacao passos[100];
    int num_passos;
    int trocas;

    printf("Digite os elementos da matriz %dx%d a ser calculada:\n", MAX_DIM, MAX_DIM);
    leitura_matriz(matriz);

    printf("Matriz lida:\n");
    impressao_matriz(matriz);

    calc_determinante_por_triangulacao(matriz, &determinante, passos, &num_passos, &trocas);
    printf("Matriz triangularizada:\n");
    impressao_matriz(matriz);
    printf("Determinante: %lf\n", determinante);
    printf("Número de trocas de linha: %d\n", trocas);
    printf("Número de passos: %d\n", num_passos);
    return 0;
}