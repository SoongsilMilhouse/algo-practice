#include <iostream>

#define N 128
using namespace std;

int check_permutation(char *str1, char *str2) {
    char tmp[N] = {0,};
    
    for (int i = 0; i < N; i++) 
        tmp[str1[i]]++;
    
    for (int i = 0; i < N; i++) 
        tmp[str2[i]]--;

    for (int i = 0; i < N; i++) {
        if (tmp[i] != 0)
            return -1;
    }
    return 0;
}

int main()
{
    char str1[N] = "b";
    char str2[N] = "c";
    int ret; 

    if (check_permutation(str1, str2) < 0)
        cout << "These are not in permutation" << endl;
    else
        cout << "These are in permutation" << endl;
}