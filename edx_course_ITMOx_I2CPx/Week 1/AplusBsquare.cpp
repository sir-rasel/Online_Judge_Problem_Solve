#include "edx-io.hpp"
int main() {
    long long int a, b;
    io >> a >> b;
    io << a + b*b << '\n';
    return 0;
}