#include <iomanip>
#include <fstream>

int main() {
    int a, b, c;
    std::ifstream("input.txt") >> a >> b >> c;
    std::ofstream("output.txt") << std::setprecision(8) << (a + b + c) / 6.0;
    return 0;
}