#include <iostream>
#include <set>
#include <string.h>

using namespace std;

int main()
{
    set<char> s;
    pair<set<char>::iterator, bool> pr;
    char *str = "comban";
    size_t len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        pr = s.insert(str[i]);
        if (!pr.second)
            cout << "문자열에 중복된 문자가 있습니다." << endl;
    }    
}