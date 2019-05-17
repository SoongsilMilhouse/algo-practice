#include <iostream>
#include <utility>

#define N 3

using namespace std;


bool solution(int matrix[][N]) {
    int n =  N;

    for (int layer = 0; layer < n/2; layer++) {
        int first = layer;
        int last = n - 1 - layer;

        for (int i = first; i < last; i++) {
            int offset = i - first;
            int top = matrix[first][i];     // 윗 부분을 저장해 놓는다.

            // 왼쪽 -> 위쪽
            matrix[first][i] = matrix[last - offset][first];

            // 아래쪽 -> 왼쪽
            matrix[last - offset][first] = matrix[last][last - offset];

            // 오른쪽 -> 아래쪽
            matrix[last][last - offset] = matrix[i][last];

            // 위쪽 -> 오른쪽
            matrix[i][last] = top;
        }
    }

    return true;
}

int main()
{
    int matrix[N][N] = { {1,2,3}, {4,5,6}, {7,8,9} };
    bool res = false;
    res = solution(matrix); 

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}