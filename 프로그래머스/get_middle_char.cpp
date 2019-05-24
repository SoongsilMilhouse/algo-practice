#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.length();
    
    if (len % 2 == 1) {
        answer = s.at(len/2);
    } else {
        answer = s.substr(len/2 - 1, 2);
    }
    
    return answer;
}

int main()
{
    string s = "abcde";
    string res;

    res = solution(s);
    cout << res << endl;
}