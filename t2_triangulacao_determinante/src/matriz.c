#include <stdio.h>

#include "matriz.h"

void leitura_matriz(double m[MAX_DIM][MAX_DIM]) {
	for (int i = 0; i < MAX_DIM; i++) {
		for (int j = 0; j < MAX_DIM; j++) {
			scanf("%lf", &m[i][j]);
		}
	}
}

void impressao_matriz(double m[MAX_DIM][MAX_DIM]) {
    for (int i = 0; i < MAX_DIM; i++) {
        for (int j = 0; j < MAX_DIM; j++) {
            printf("%8.2lf ", m[i][j]);
        }
        printf("\n");
    }
}

int troca_linha(double m[MAX_DIM][MAX_DIM], int linha1, int linha2) {
    if (linha1 < 0 || linha1 >= MAX_DIM || linha2 < 0 || linha2 >= MAX_DIM) {
        printf("%s: Erro ao trocar linhas: Índices de linha inválidos.\n", TAG_MATRIZ);
        return 0;
    }

    for (int j = 0; j < MAX_DIM; j++) {
        double temp = m[linha1][j];
        m[linha1][j] = m[linha2][j];
        m[linha2][j] = temp;
    }

    return 1;
}