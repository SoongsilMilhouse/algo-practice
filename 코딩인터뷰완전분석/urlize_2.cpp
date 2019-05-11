#include <iostream>

using namespace std;

void replace_spaces(char str[], int len) {
    int spaceCount = 0, index, i = 0;
    
    for (i = 0; i < len; i++) {
        if (str[i] == ' ')
            spaceCount++;
    }

    index = len + spaceCount * 2;
    str[len] = '\0';

    for (i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[index - 1] = '0';
            str[index - 2] = '2';
            str[index - 3] = '%';
            index -= 3;
        } else {
            str[index - 1] = str[i];
            index--;
        }
    }

    cout << str << endl;
}

int main()
{
    char str[256] = "ben milhouse";
    int len = 12;

    replace_spaces(str, len); 
}