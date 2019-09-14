#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> her(3), his(2);
    vector<bool> available;
    int card;

    while (cin >> her[0] >> her[1] >> her[2] >> his[0] >> his[1], her[0]){
        available.clear();
        available.resize(53, true);

        for (int i = 0; i < 3; ++i){
            available[her[i]] = false;
            if (i < 2) available[his[i]] = false;
        }

        sort(her.begin(), her.end());
        sort(his.begin(), his.end());

        card = 53;

        if (his[0] > her[2])
            for (int i = 1; i <= 52 && i < card; ++i)
                if (available[i]) card = i;

        if (his[1] > her[2])
            for (int i = her[2] + 1; i <= 52 && i < card; ++i)
                if (available[i]) card = i;

        if (his[0] > her[1])
            for (int i = her[1] + 1; i <= 52 && i < card; ++i)
                if (available[i]) card = i;

        if (card == 53) card = -1;
        printf("%d\n",card);
    }
    return 0;
}
