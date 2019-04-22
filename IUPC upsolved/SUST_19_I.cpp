#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("i.input.txt", "r", stdin);
//    freopen("mapsCode.txt", "w", stdout);
    map<int, string> mp;
    mp[0] = ".";
    mp[1] = "-";
    mp[2] = "..";
    mp[3] = "-.";
    mp[4] = ".-";
    mp[5] = "...";
    mp[6] = "--";
    mp[7] = "-..";
    mp[8] = ".-.";
    mp[9] = "..-";
    mp[10] = "....";
    mp[11] = "--.";
    mp[12] = "-.-";
    mp[13] = "-...";
    mp[14] = ".--";
    mp[15] = ".-..";
    mp[16] = "..-.";
    mp[17] = "...-";
    mp[18] = ".....";
    mp[19] = "---";
    mp[20] = "--..";
    mp[21] = "-.-.";
    mp[22] = "-..-";
    mp[23] = "-....";
    mp[24] = ".--.";
    mp[25] = ".-.-";
    mp[26] = ".-...";
    mp[27] = "..--";
    mp[28] = "..-..";
    mp[29] = "...-.";
    mp[30] = "....-";
    mp[31] = "......";
    mp[32] = "--.-";
    mp[33] = "-.--";
    mp[34] = ".---";
    mp[35] = "...--";

    /*
    vector<pair<int, string> > v;

    for(int i=0; i<36; i++)
    {
        string s = mp[i];
        int cost=s.size()-1;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]=='.') cost++;
            else cost+=3;
        }
    //        cout<<cost<<" "<<s<<endl;
        v.push_back(make_pair(cost, s));
    }
    sort(v.begin(), v.end());
    for(int i=0; i<36; i++)
    {
        cout<<"mp["<<i<<"] = \""<<v[i].second<<"\";"<<endl;
    //        cout<<mp[i]<<" "<<v[i].first<<" "<<v[i].second<<endl;
    }
    */
    int n;
    cin>>n;
    getchar();
    for(int z=1; z<=n; z++)
    {
        string s;
        getline(cin, s);
        map<char, int> counts;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ') continue;
            char c = tolower(s[i]);
            counts[c]++;
        }
        vector<pair<int, char> > v;
        for(int i='0'; i<='z'; i++)
        {
            if(counts[i]==0) continue;
            v.push_back(make_pair(counts[i], i));
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        map<char, string> ans;
        for(int i=0; i<36; i++)
        {
            ans[v[i].second] = mp[i];
        }
        for(int i='a'; i<='z'; i++)
        {
            //            cout<<char(i)<<" ";
            cout<<ans[i]<<endl;
        }
        for(int i='0'; i<='9'; i++)
        {
            //            cout<<char(i)<<" ";
            cout<<ans[i]<<endl;
        }
//        if(z!=n) cout<<endl;
        // need to update
    }
}
