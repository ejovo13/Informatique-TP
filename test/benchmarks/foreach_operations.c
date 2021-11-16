#include "ejovo_matrix.h"
#include <assert.h>
#include <stdbool.h>

#define N_ITER 1E5
#define N 50

int main() {

    Matrix *M1 = Matrix_value(N, N, 0.23);
    Matrix *M2 = Matrix_value(N, N, 0.38);
    Matrix *M3 = Matrix_value(N, N, 0.34);

    for (size_t i = 0; i < N_ITER; i++) {

        matadd_foreach(M1, M2);

        // matadd_for(M1, M2);
        // matadd_foreach(M2, M3);
        // matadd_foreach(M3, M1);
    }



    // Matrix_print(M1);

    Matrix_free(M1);
    Matrix_free(M2);
    Matrix_free(M3);

    return 0;
}