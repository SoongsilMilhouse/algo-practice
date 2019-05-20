#include <iostream>
#include <utility>

#define M 5
#define N 6

using namespace std;

void nullify_row(int matrix[][N], int pos) {
    for (int j = 0; j < N; j++)
        matrix[pos][j] = 0;
}

void nullify_col(int matrix[][N], int pos) {
    for (int i = 0; i < M; i++)
        matrix[i][pos] = 0;
}

void set_zero(int matrix[][N]) {
    bool row_has_zero = false;
    bool col_has_zero = false;

    // is there '0' on first row?
    for (int j = 0; j < N; j++) {
        if (matrix[0][j] == 0) {
            row_has_zero = true;
            break;
        }
    }
    // is there '0' on first columm?
    for (int i = 0; i < M; i++) {
        if (matrix[i][0] == 0) {
            col_has_zero = true;
            break;
        }
    }
    // check the rest of the array has '0'
    for (int i = 1; i < M; i++) {
        for (int j = 1; j < N; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    // use 1st columm to change the row to '0'
    for (int i = 1; i < M; i++) {
        if (matrix[i][0] == 0) 
            nullify_row(matrix, i);
    }
    // use 1st row to change the columm to '0'
    for (int j = 1; j < N; j++) {
        if (matrix[0][j] == 0)
            nullify_col(matrix, j);
    }
    // change the 1st row to '0'
    if (row_has_zero) 
        nullify_row(matrix, 0);
    // change the 1st columm to '0'
    if (col_has_zero)
        nullify_col(matrix, 0);
}

int main()
{
	int matrix[M][N] = { {1,1,1,0,1,1}, {1,1,1,1,1,1}, {1,0,1,1,0,1}, {1,1,1,1,1,1}, {0,1,1,1,1,0} };
    
    set_zero(matrix);
}