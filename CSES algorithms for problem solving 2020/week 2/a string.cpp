#include <iostream>
using namespace std;

string s;
int n;
int letters [128];
string result;

int main () {
    cin >> s;
    n = s.size();
    for (int i = 0; i <n; i ++)
        letters [s[i]] ++;

    char last = '#';
    for(int amount = n; amount>= 1; amount--) {
        char take = ' ';
        bool fail = false;
        for (int c = 'A'; c <= 'Z'; c ++) {
            if (2 * letters [c] == amount + 1) take = c;
            if (2 * letters [c]> amount + 1) fail = true;
        }
        if (take == last) fail = true;
        if (fail) {
            cout << "-1\n";
            return 0;
        }
        for (int c = 'A'; c <= 'Z'; c ++)
            if (take == ' ' && last != c && letters [c])
                take = c;

        letters[take]--;
        result += take;
        last = take;
    }
    cout << result << "\n";
    return 0;
}
