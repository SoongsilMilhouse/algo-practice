#include <iostream>
#include <unordered_map>

using namespace std;

int check_permutation(string str1, string str2) {
    unordered_map<char, int> umap;

    for (char &c : str1) {
        auto itr = umap.find(c);
        if (itr != umap.end())
            umap[c] = itr->second + 1;

        umap[c] = 1;
    }

    for (char &c : str2) {
        auto itr = umap.find(c);
        if (itr == umap.end() || itr->second - 1 < 0) 
            return -1;
        
        umap[c] = itr->second - 1;
    }
    return 0;
}

int main()
{
    string str1 = "abbc";
    string str2 = "cbbac";

    if (check_permutation(str1, str2) < 0)
        cout << "These are not in permutation" << endl;
    else
        cout << "These are in permutation" << endl;
}