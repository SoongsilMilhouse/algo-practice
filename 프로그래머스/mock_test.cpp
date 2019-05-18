#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> method1 = {1,2,3,4,5};
vector<int> method2 = {2,1,2,3,2,4,2,5};
vector<int> method3 = {3,3,1,1,2,2,4,4,5,5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<pair<int, int>> temp;
    pair<int, int> max;
    int count1 = 0, count2 = 0, count3 = 0;
    size_t length = answers.size();
    
    for (int i = 0; i < length; i++) {
        if (method1[i%5] == answers[i]) count1++; 
        if (method2[i%8] == answers[i]) count2++; 
        if (method3[i%10] == answers[i])count3++; 
    }

    temp.push_back(make_pair(count1, 1));
    temp.push_back(make_pair(count2, 2));
    temp.push_back(make_pair(count3, 3));
    max = *max_element(temp.begin(), temp.end());

    for (auto itr : temp) {
        if (max.first == itr.first) {
            answer.push_back(itr.second);
        }
    }

    return answer;
}

int main()
{
    vector<int> answer = {1,3,2,4,2};
    vector<int> res;
    res = solution(answer);
    
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}
