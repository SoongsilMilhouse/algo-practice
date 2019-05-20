#include <iostream>
#include <utility>

#define M 3
#define N 4

using namespace std;

pair<int, int> get_pos(int array[][N]) {
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			if (array[i][j] == 0)
				return make_pair(i, j);
}

void set_zero(int array[][N], pair<int,int> pos) {
	// horizontal
	for (int i = 0; i < M; i++) 
		array[i][pos.second] = 0;
	// vertical
	for (int i = 0; i < N; i++)
		array[pos.first][i] = 0;
}

int main()
{
	int array[M][N] = { {1,1,1,1}, {1,0,1,1}, {1,1,1,1} };
	pair<int, int> pos;

	pos = get_pos(array);
	set_zero(array, pos);
}