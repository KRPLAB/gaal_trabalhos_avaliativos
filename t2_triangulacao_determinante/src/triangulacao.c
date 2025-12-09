#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "triangulacao.h"
#include "matriz.h"

void atualiza_passo_triangulacao(PassoTriangulacao *passo, int passo_num, int linha_pivo, int coluna_pivo, double valor_pivo) {
    passo->passo = passo_num;
    passo->linha_pivo = linha_pivo;
    passo->coluna_pivo = coluna_pivo;
    passo->valor_pivo = valor_pivo;
}

int triangular_matriz(double matriz[MAX_DIM][MAX_DIM], PassoTriangulacao passos[], int *num_passos, int *trocas) {
    *num_passos = 0;

    // 1. LOOP DO PIVÔ (p): Percorre a diagonal principal
    for (int p = 0; p < MAX_DIM; p++) {
        // --- PARTE A: GARANTIR O PIVÔ ---
        // Se o pivô atual for zero, precisamos encontrar um substituto nas linhas abaixo
        if (fabs(matriz[p][p]) < 1e-9) {
            bool achou = false;
            for (int i = p + 1; i < MAX_DIM; i++) {
                if (fabs(matriz[i][p]) > 1e-9) {
                    if (troca_linha(matriz, p, i) == 1) {
                        (*trocas)++;
                        achou = true;
                        break;
                    }
                }
            }

            if (!achou) {
                return -1;
            }
        }

        // --- REGISTRO DO PASSO (LOG) ---
        atualiza_passo_triangulacao(&passos[*num_passos], *num_passos, p, p, matriz[p][p]);
        (*num_passos)++;

        // --- PARTE B: ELIMINAÇÃO (ZERAR AS LINHAS DE BAIXO) ---
        // Percorre as linhas (i) abaixo do pivô (p)
        for (int i = p + 1; i < MAX_DIM; i++) {
            double mult = matriz[i][p] / matriz[p][p];

            // Aplica a subtração na linha (i) inteira
            // Percorre as colunas (k). 
            // DICA: Podemos começar k em 'p' porque antes disso já é tudo zero.
            for (int k = p; k < MAX_DIM; k++) {
                matriz[i][k] = matriz[i][k] - (mult * matriz[p][k]);
            }
        }
    }
    
    return 0;
}

void calc_determinante_por_triangulacao (double matriz[MAX_DIM][MAX_DIM], double *determinante, PassoTriangulacao passos[], int *num_passos, int *trocas) {
    *trocas = 0;
    *num_passos = 0;

    if (triangular_matriz(matriz, passos, num_passos, trocas) != 0) {
        *determinante = 0;
        return;
    } 

    if (*trocas % 2 != 0) {
        *determinante = -1.0;
    } else {
        *determinante = 1.0;
    }

    for (int i = 0; i < MAX_DIM; i++) {
        *determinante *= matriz[i][i];
    }
}
