#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    ifstream inf("input.txt");
    ofstream ouf("output.txt");
    int n;
    inf >> n;
    int arr[10000007];
    arr[n]=INT_MAX;
    int minimum = INT_MAX,start = 0,end = n;
    char cmd;
    for(int i=0; i<n; i++)
    {
        inf >> cmd;
        if(cmd == '+')
        {
            int val;
            inf >> val;
            minimum = min(minimum,val);
            arr[start++] = val;
        }
        else if(cmd == '?')
        {
            ouf << min(minimum,arr[end]) << '\n';
        }
        else if(end == n)
        {
            while (--start > 0)
            {
                arr[--end] = min(arr[start], arr[end+1]);
            }
            minimum = arr[n];
        }
        else
        {
            end++;
        }
    }
    return 0;
}
