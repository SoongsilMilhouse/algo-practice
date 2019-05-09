#include <iostream>

using namespace std;

int get_char_number(char c) {
    return c - 'a';
}

int toggle(int bitVector, int index) {
    if (index < 0) return bitVector;
    int mask = 1 << index;
    if ((bitVector & mask) == 0) {
        bitVector |= mask; 
    } else {
        bitVector &= ~mask;
    }

    return bitVector;
}

bool check_exactly_one_bit_set(int bitVector) {
    return (bitVector & (bitVector - 1)) == 0;
}

bool solution(string input) {
    int bitVector = 0;

    for (char &c : input) {
        int x = get_char_number(c);
        bitVector = toggle(bitVector, x);        
    }

    return bitVector == 0 || check_exactly_one_bit_set(bitVector);
}



int main() 
{
    string input = "tactcoa";
    bool res;
    res = solution(input);
    cout << boolalpha << res << endl;
}