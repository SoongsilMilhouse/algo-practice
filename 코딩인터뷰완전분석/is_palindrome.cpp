#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <ctype.h>

using namespace std;

char to_lowercase(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    
    return c;
}

bool solution(string input) {
    unordered_map<char, int> umap;
    size_t len = input.length();
    int odd_count = 0;

    for (char &c : input) 
        c = to_lowercase(c);
    
    for (char &c : input) {
        if (c == ' ') {
            len -= 1;
            continue;
        }

        auto itr = umap.find(c);
        if (itr != umap.end()) {
            umap[c] = itr->second + 1;
            continue;
        }

        umap[c] = 1;
    }

    if (len % 2 == 0) {
        for (auto itr = umap.begin(); itr != umap.end(); itr++) {
            if (itr->second % 2 != 0)
                return false;
        }
    }
    else {
        for (auto itr = umap.begin(); itr != umap.end(); itr++) {
            if (itr->second % 2 != 0) 
                odd_count++;
            if (odd_count > 1)
                return false;
        }
    }

    return true;
}

int main()
{
    string input = "Tact Coa";
    bool res;
    res = solution(input);
    cout << boolalpha << res << endl;
}