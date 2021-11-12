#include "ejovo_matrix.h"
#include <assert.h>
#include <stdbool.h>

void t_Matrix_KCTB();

int main() {

    t_Matrix_KCTB();

    return 0;
}

void t_Matrix_KCTB() {

    /**========================================================================
     *!                           K
     *========================================================================**/
    Matrix *K1 = Matrix_K(1); // will return a null pointer
    assert(!K1);

    Matrix *K2 = Matrix_K(2);

    // Matrix_print(K2);
    assert(Matrix_at(K2, 0, 0) == 2);
    assert(Matrix_at(K2, 0, 1) == -1);
    assert(Matrix_at(K2, 1, 0) == -1);
    assert(Matrix_at(K2, 1, 1) == 2);

    Matrix *K3 = Matrix_K(3);
    // Matrix_print(K3);
    assert(Matrix_at(K3, 0, 0) == 2);
    assert(Matrix_at(K3, 0, 1) == -1);
    assert(Matrix_at(K3, 0, 2) == 0);
    assert(Matrix_at(K3, 1, 0) == -1);
    assert(Matrix_at(K3, 1, 1) == 2);
    assert(Matrix_at(K3, 1, 2) == -1);
    assert(Matrix_at(K3, 2, 0) == 0);
    assert(Matrix_at(K3, 2, 1) == -1);
    assert(Matrix_at(K3, 2, 2) == 2);

    Matrix_free(K1);
    Matrix_free(K2);
    Matrix_free(K3);

    /**========================================================================
     *!                           C
     *========================================================================**/
    Matrix *C1 = Matrix_C(1);
    assert(!C1);

    Matrix *C3 = Matrix_C(3);

    // Matrix_print(C3);
    assert(Matrix_at(C3, 0, 0) == 2);
    assert(Matrix_at(C3, 0, 1) == -1);
    assert(Matrix_at(C3, 0, 2) == -1);
    assert(Matrix_at(C3, 1, 0) == -1);
    assert(Matrix_at(C3, 1, 1) == 2);
    assert(Matrix_at(C3, 1, 2) == -1);
    assert(Matrix_at(C3, 2, 0) == -1);
    assert(Matrix_at(C3, 2, 1) == -1);
    assert(Matrix_at(C3, 2, 2) == 2);

    Matrix_free(C3);

    /**========================================================================
     *!                           T
     *========================================================================**/
    Matrix *T1 = Matrix_T(1);
    assert(!T1);

    Matrix *T3 = Matrix_T(3);
    assert(Matrix_at(T3, 0, 0) == 1);
    assert(Matrix_at(T3, 0, 1) == -1);
    assert(Matrix_at(T3, 0, 2) == 0);
    assert(Matrix_at(T3, 1, 0) == -1);
    assert(Matrix_at(T3, 1, 1) == 2);
    assert(Matrix_at(T3, 1, 2) == -1);
    assert(Matrix_at(T3, 2, 0) == 0);
    assert(Matrix_at(T3, 2, 1) == -1);
    assert(Matrix_at(T3, 2, 2) == 2);

    /**========================================================================
     *!                           B
     *========================================================================**/
    Matrix *B1 = Matrix_B(1);
    assert(!B1);

    Matrix *B3 = Matrix_B(3);
    assert(Matrix_at(B3, 0, 0) == 1);
    assert(Matrix_at(B3, 0, 1) == -1);
    assert(Matrix_at(B3, 0, 2) == 0);
    assert(Matrix_at(B3, 1, 0) == -1);
    assert(Matrix_at(B3, 1, 1) == 2);
    assert(Matrix_at(B3, 1, 2) == -1);
    assert(Matrix_at(B3, 2, 0) == 0);
    assert(Matrix_at(B3, 2, 1) == -1);
    assert(Matrix_at(B3, 2, 2) == 1);

    printf("KCTB passed\n");


}