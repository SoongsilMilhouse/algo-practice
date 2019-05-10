#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

bool solution(string str1, string str2) {
    unordered_set<char> s;
    size_t len1 = str1.length();
    size_t len2 = str2.length();

    if (len1 > len2) {
        for (char &c : str1) 
            s.insert(c);

        for (char &c : str2) {
            if (s.find(c) != s.end()) 
                s.erase(c);
            else 
                s.insert(c);
        }
    }
    else {
        for (char &c : str2)
            s.insert(c);

        for (char &c : str1) {
            if (s.find(c) != s.end())
                s.erase(c);
            else
                s.insert(c);
        }
    }

    if (s.size() <= 2)
        return true;
    else
        return false;
}

int main()
{
    string str1 = "bake", str2 = "pale";
    bool res;

    res = solution(str1, str2);
    cout << boolalpha << res << endl;
}
