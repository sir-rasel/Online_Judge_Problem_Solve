#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>people(n+5);
    for(int i = 0; i < n; i++) cin>>people[i];
    int res=0;
    for(int i = 1; i < n; i++)
    {
        if(people[i] == 0 && people[i-1] == 1 && people[i+1] == 1)
        {
            people[i+1] = 0;
            res++;
        }
    }
    cout << res << endl;
    return 0;
}
