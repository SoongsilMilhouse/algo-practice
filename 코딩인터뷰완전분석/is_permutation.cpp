#include <iostream>
#include <algorithm>

#define N 128
using namespace std;

int check_permutation(char *str1, char *str2) {
    sort(str1, str1 + N); 
    sort(str2, str2 + N); 
    
    for (int i = 0; i < N; i++) {
        if (str1[i] != str2[i])
            return -1;
    }
    return 0;
}

int main()
{
    char str1[N] = "baaaaaaaac";
    char str2[N] = "abac";
    int ret; 

    if (check_permutation(str1, str2) < 0)
        cout << "These are not in permutation" << endl;
    else
        cout << "These are in permutation" << endl;
}


