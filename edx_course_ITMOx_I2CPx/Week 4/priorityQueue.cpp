#include "edx-io.hpp"
#include <queue>
#include <utility>
#include <vector>

int main() {
    int n;
    io >> n;

    std::vector<int> real_values(n, -1);
    std::priority_queue<std::pair<int, int>> queue;

    for (int i = 0; i < n; ++i) {
        char ch;
        int index, value;
        io >> ch;
        if (ch == 'A') {
            io >> value;
            real_values[i] = value;
            queue.push(std::make_pair(-value, i));
        } else if (ch == 'D') {
            io >> index >> value;
            if (real_values[--index] > value) {
                real_values[index] = value;
                queue.push(std::make_pair(-value, index));
            }
        } else if (ch == 'X') {
            while (!queue.empty() &&
                   real_values[queue.top().second] != -queue.top().first) {
                queue.pop();
            }
            if (queue.empty()) {
                io << "*\n";
            } else {
                io << -queue.top().first << '\n';
                queue.pop();
            }
        }
    }
    return 0;
}
