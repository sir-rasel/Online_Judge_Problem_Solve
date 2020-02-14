#include <fstream>

int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19 };
int prime_count = 8;

int main()
{
    int n;

    std::ifstream("input.txt") >> n;

    int best_count = 0, best_value = 0;
    for (int i = 2; i <= n; ++i)
    {
        int value = i;
        int count = 1;

        for (int p = 0; p < prime_count && value >= primes[p]; ++p)
        {
            int count_p = 0;
            int curr_prime = primes[p];
            while (value % curr_prime == 0)
            {
                ++count_p;
                value /= curr_prime;
            }
            count *= (1 + count_p);
        }

        if (best_count < count)
        {
            best_count = count;
            best_value = i;
        }
    }

    std::ofstream("output.txt") << n - best_value + 1 << "\n";
    return 0;
}
