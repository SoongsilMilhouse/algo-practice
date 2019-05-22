#include <iostream>
#include <string>

using namespace std;

bool is_rotation(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;

    int posA = 0, posB = 0;
    int len1 = s1.length();
    int len2 = s2.length();

    while (posA < len1 && posB < len2) {
        if (s1.at(posA) == s2.at(posB)) {
            posA++; 
            posB++;

            if (posB >= len2)
                posB = 0;
        }
        else {
            posB++;
        }
    }

    return posA == s1.length() ? true : false;
}

int main()
{
    string s1 = "waterbottle";
    string s2 = "erbottlewat";

    cout << boolalpha << is_rotation(s1, s2) << endl;
}
