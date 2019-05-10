#include <iostream>
#include <string>

using namespace std;

bool one_edit_replace(string s1, string s2) {
    bool found_difference = false;
    
    for (int i = 0; i < s1.length(); i++) {
        if (s1.at(i) != s2.at(i)) {
            if (found_difference) {
                return false;
            }
            found_difference = true;
        }
    }
    return true;
}

bool one_edit_insert(string s1, string s2) {
    int idx1 = 0;
    int idx2 = 0;
    
    while (idx2 < s2.length() && idx1 < s1.length()) {
        if (s1.at(idx1) != s2.at(idx2)) {
            if (idx1 != idx2) {
                return false;
            }
            idx2++;
        } else {
            idx1++;
            idx2++;
        }
    }
    
    return true;
}

bool solution(string first, string second) {
    if (first.length() == second.length()) {
        return one_edit_replace(first, second);
    } else if (first.length() + 1 == second.length()) {
        return one_edit_insert(first, second);
    } else if (first.length() - 1 == second.length()) {
        return one_edit_insert(second, first);
    }
}

int main() 
{
    string str1 = "pale", str2 = "ple";
    cout << boolalpha << solution(str1, str2) << endl;    
}