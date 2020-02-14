#include <cmath>
#include <fstream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    ifstream inf("input.txt");
    ofstream ouf("output.txt");

    int mat[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            inf >> mat[i][j];
    int ans=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i!=j)
            {
                int k = 3-i-j;
                ans = max(ans,(mat[0][i]*mat[0][i]+mat[1][j]*mat[1][j]+mat[2][k]*mat[2][k]));
            }
        }
    }
    ouf << setprecision(10) << sqrt(ans) << '\n';
    return 0;
}
