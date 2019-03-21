#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    while (cin >> S) {
        bool lower = false;
        bool upper = false;
        bool digit = false;
        int passes = 0;
        for (auto c : S) {
            lower |= islower(c);
            upper |= isupper(c);
            digit |= isdigit(c);

            if (lower && upper && digit) {
                passes += 1;
                lower = false;
                upper = false;
                digit = false;
            }
        }
        cout << passes << endl;
    }
    return 0;
}
