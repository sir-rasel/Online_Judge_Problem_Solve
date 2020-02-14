#include <cstdio>
#include <map>

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n, e;
    std::map<int, int> cnt;

    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&e);
        if (i == 0 || e != 0) {
            ++cnt[1];
        } else {
            auto first = cnt.begin();
            ++cnt[first->first + 1];
            if (first->second == 1) {
                cnt.erase(first);
            } else {
                --first->second;
            }
        }
    }
    printf("%d\n",cnt.size());
    for (std::map<int, int>::iterator i = cnt.begin(); i != cnt.end(); ++i) {
        printf("%d %d\n",i->first,i->second);
    }
    return 0;
}
