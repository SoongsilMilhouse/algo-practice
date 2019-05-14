#include <string>
#include <vector>

using namespace std;

int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
string days_str[] = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };

string solution(int a, int b) {
	string answer = "";
	int days_sum = -1;

	for (int i = 0; i < a - 1; i++) 
		days_sum += days[i];
	days_sum += b;

	answer = days_str[days_sum % 7];
	return answer;
}

int main() 
{
    int a = 1, b = 7;
    string res;

    res = solution(a, b);
    cout << res << endl;
}
