#include <stdio.h>
#include <algorithm>
#include <utility>

int n, k;
std::pair<int, int>     jewels[100000];
std::pair<double, int> sorting[100000];

double find_value_for(double alpha) {
    for (int i = 0; i < n; ++i) {
        sorting[i].first = jewels[i].first - alpha * jewels[i].second;
        sorting[i].second = i;
    }
    std::sort(sorting, sorting + n);
    double result = 0;
    for (int i = 1; i <= k; ++i) {
        result += sorting[n - i].first;
    }
    return result;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    scanf("%d%d", &n, &k);
    double min_ratio = 1e7, max_ratio = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &jewels[i].first, &jewels[i].second);
        double ratio = (double) jewels[i].first / jewels[i].second;
        min_ratio = std::min(min_ratio, ratio);
        max_ratio = std::max(max_ratio, ratio);
    }

    for (int t = 0; t < 30; ++t) {
        double current = (max_ratio + min_ratio) / 2;
        if (find_value_for(current) >= 0) {
            min_ratio = current;
        } else {
            max_ratio = current;
        }
    }
    find_value_for(min_ratio);
    for (int i = 1; i <= k; ++i) {
        printf("%d ", sorting[n - i].second + 1);
    }
    return 0;
}
