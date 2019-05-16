#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    int answer = 0;
    int count = 0;
    vector<int> array(n+1);
    array.assign(n+1, 0);

    for (int i = 1; i < n + 1; i++)
        array[i] = 1;

    for (int i = 0; i < reserve.size(); i++)
        array[reserve[i]] += 1;

    for (int i = 0; i < lost.size(); i++)
        array[lost[i]] -= 1;

    for (int i = 0; i < lost.size(); i++) {
        if (array[lost[i]] == 0) {
            if (lost[i] == 1) {
                if (lost[i+1] == 2) 
                    array[lost[i]] += 1;
            }
            else if (lost[i] == n) {
                if (lost[i-1] == 2) 
                    array[lost[i]] += 1;
            }
            else {
                if (lost[i-1] == 2){
                    array[lost[i]] += 1;
                    array[lost[i-1]] -= 1;
                }
                else if (lost[i+1] == 2) {
                    array[lost[i]] += 1;
                    array[lost[i+1]] -= 1;
                }
            }
        }
    }

    for (int i = 1; i < n + 1; i++) 
        if (array[i] <= 0) count++;
    
    answer = n - count;

    return answer;
}

int main()
{
    int n = 5;
    int res;
    vector<int> lost = {2,4};
    vector<int> reserve = {1,3,5};

    res = solution(n, lost, reserve);
    cout << res << endl;
}
