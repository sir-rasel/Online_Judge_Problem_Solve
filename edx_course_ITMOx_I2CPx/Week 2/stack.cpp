#include <fstream>
#include <string>

int stack[1000000];

int main() {
    std::ifstream inf("input.txt");
    std::ofstream ouf("output.txt");

    int n, size = 0;
    inf >> n;

    for (int i = 0; i < n; ++i) {
        std::string cmd;
        inf >> cmd;
        if (cmd == "+") {
            inf >> stack[size++];
        } else {
            ouf << stack[--size] << std::endl;
        }
    }
    return 0;
}