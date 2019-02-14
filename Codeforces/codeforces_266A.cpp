#include <bits/stdc++.h>
using namespace std;

int main(){
    int NumberOfstone;
    cin>>NumberOfstone;
    char StoneColour;
    int StoneOfDifferentColour=0;
    cin>>StoneColour;
    char temporary=StoneColour;
    for(int start=1;start<NumberOfstone;start++){
        cin>>StoneColour;
        if( StoneColour==temporary )
            StoneOfDifferentColour++;
        temporary=StoneColour;
    }
    cout<<StoneOfDifferentColour<<endl;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    int NumberOfstone;
    cin>>NumberOfstone;
    string StoneSequense;
    cin>>StoneSequense;
    int StoneOfDifferentColour=0;
    for(int start=0;start<StoneSequense.length()-1;start++){
        if( StoneSequense[start]==StoneSequense[start+1] )
            StoneOfDifferentColour++;
    }
    cout<<StoneOfDifferentColour<<endl;
    return 0;
}
*/
