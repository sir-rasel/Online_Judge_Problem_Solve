#include <fstream>
#include <algorithm>

int A[50000000];

int main() {
    int n, k1, k2;
    int a, b, c;
    std::ifstream("input.txt") >> n >> k1 >> k2 >> a >> b >> c >> A[0] >> A[1];
    for (int i = 2; i < n; ++i) {
        A[i] = A[i - 2] * a + A[i - 1] * b + c;
    }

    std::nth_element(A, A + k1 - 1, A + n);
    std::partial_sort(A + k1 - 1, A + k2, A + n);

    std::ofstream ouf("output.txt");
    for (int i = k1 - 1; i < k2; ++i) {
        ouf << A[i] << " ";
    }
    return 0;
}
