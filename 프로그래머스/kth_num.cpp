#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

	for (int i = 0; i < commands.size(); i++) {
		vector<int> temp;
		int ijk[3];
		ijk[0] = commands[i].at(0);
		ijk[1] = commands[i].at(1);
		ijk[2] = commands[i].at(2);

		int len = ijk[0] > ijk[1] ? ijk[0] - ijk[1] + 1 : ijk[1] - ijk[0] + 1;
		int start_idx = ijk[0] - 1;
		int end_idx = len + ijk[0] - 1;

		for (int j = start_idx; j < end_idx; j++) {
			temp.push_back(array[j]);
		}
		sort(temp.begin(), temp.end());
		answer.push_back(temp.at(ijk[2]-1));
	}

	return answer;
}

int main()

{
	vector<int> array{ 1, 5, 2, 6, 3, 7, 4 };
	vector<vector<int>> commands{ { 2,5,3 },{ 4,4,1 },{ 1,7,3 } };
	vector<int> res;
	
	res = solution(array, commands);

	for (int &num : res) {
		cout << num << " " << endl;
	}

}
