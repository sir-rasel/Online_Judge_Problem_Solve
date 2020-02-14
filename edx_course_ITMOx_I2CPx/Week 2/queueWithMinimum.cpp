#include "edx-io.hpp"
#include <map>
#include <queue>

int main() {
    int n, elem;
    std::queue<int> queue;
    std::map<int, int> counter;
    io >> n;

    for (int i = 0; i < n; ++i) {
        char cmd;
        io >> cmd;
        if (cmd == '-') {
            elem = queue.front();
            queue.pop();
            if (--counter[elem] == 0) {
                counter.erase(elem);
            }
        } else if (cmd == '?') {
            io << counter.begin()->first << '\n';
        } else {
            io >> elem;
            queue.push(elem);
            ++counter[elem];
        }
    }
    return 0;
}