#include <stdio.h>
#include <string.h>

#define N 128
using namespace std;

int main()
{
    char str[N] = ".,!@@^&*a";
    bool arr[N] = {0,};
    size_t len = strlen(str);
    int ret;

    for (int i = 0; i < len; i++) {
        ret = str[i];
        if (arr[ret]){
            printf("문자열에 중복된 문자가 있습니다.\n");
            break;
        }
        arr[ret] = true;
    }
}