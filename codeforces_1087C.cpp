#include<bits/stdc++.h>
using namespace std;

int main(){
    int xa, ya, xb, yb, xc, yc;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;

    vector<pair<int, int> > treePoint;
    treePoint.push_back({xa, ya});
    treePoint.push_back({xb, yb});
    treePoint.push_back({xc, yc});
    sort(treePoint.begin(), treePoint.end());

    vector<pair<int, int> > adjacentPoint;
    for(int i=treePoint[0].first; i<=treePoint[1].first; i++)
        adjacentPoint.push_back({i, treePoint[0].second});
    for(int i=treePoint[2].first; i>=treePoint[1].first; i--)
        adjacentPoint.push_back({i, treePoint[2].second});
    for(int i=min(ya, min(yb, yc)); i<=max(ya, max(yb, yc)); i++)
        adjacentPoint.push_back({treePoint[1].first, i});
    adjacentPoint.push_back(treePoint[0]);
    adjacentPoint.push_back(treePoint[1]);
    adjacentPoint.push_back(treePoint[2]);
    sort(adjacentPoint.begin(), adjacentPoint.end());

    map<pair<int, int>,int > detectDuplicate;
    vector<pair<int, int> > minimumClearPoint;
    for(int i=0; i<adjacentPoint.size(); i++){
        if(detectDuplicate.count(adjacentPoint[i])==0){
            detectDuplicate[adjacentPoint[i]]++;
            minimumClearPoint.push_back(adjacentPoint[i]);
        }
    }

    cout<<minimumClearPoint.size()<<endl;
    for(int i=0; i<minimumClearPoint.size(); i++)
        cout<<minimumClearPoint[i].first<<" "<<minimumClearPoint[i].second<<endl;

    return 0;
}
