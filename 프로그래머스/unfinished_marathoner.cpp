#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> participants;
    for (string name : participant) { 
        ++participants[name]; 
    } 
    for (string name : completion) {
        --participants[name]; 
    } 
    for (auto pair : participants) {
        if (pair.second > 0) { return pair.first; } 
    } 
}

int main()
{
    vector<string> participant = {"leo", "kiki", "eden"};
    vector<string> completion = {"kiki", "eden"};
    string res;

    res = solution(participant, completion);
    cout << res << endl;

}