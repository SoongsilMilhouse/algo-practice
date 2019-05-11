#include <iostream>

using namespace std;

void change_space_to_str(string str, int len) {
    string ret = "";

    for (int i = 0; i < len; i++) {
        if (str.at(i) == ' ') {
            ret += "%20";
            continue;
        }
        ret += str.at(i);
    }

    cout << ret << endl;
}

int main()
{
    string str = " a";
    int len;
    len = str.length();

    change_space_to_str(str, len);
}