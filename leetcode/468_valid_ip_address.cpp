class Solution {
public:
    bool check(char c){
        return (c >= 'A' && c<= 'F') || (c >= 'a' && c<= 'f');
    }
    vector<string> getTokens(string s, char c){
        stringstream ss(s);
        string temp;
        vector<string> tokens;
        while(getline(ss,temp,c)) tokens.push_back(temp);
        return tokens;
    }
    bool ipv4Check(string ip){
        vector<string> t = getTokens(ip ,'.');
        int c=0;
        if(t.size() == 4){
            for(int j=0;j<4;j++){
                string ct = t[j];
                int i=0;
                while(i< ct.size() && isdigit(ct[i])) i++;
                if(i == ct.size() && ct.size() >0 && ct.size() <= 3 && stoi(ct)>=0 && stoi(ct)<=255)
                    if(ct.size() == 1 || ct[0] != '0') c++;
            }
        }
        return c == 4;
    }
    bool ipv6Check(string ip){
        vector<string> t = getTokens(ip ,':');
        int c=0;
        if(t.size() == 8){
            for(int j=0;j<8;j++){
                string ct = t[j];
                int i=0;
                while(i< ct.size() && ((isdigit(ct[i]) || check(ct[i])))) i++;
                if(i==ct.size() && ct.size() <=4 && ct.size() > 0) c++;
            }
        }
        return c == 8;
    }
    string validIPAddress(string ip){
        string ipv4, ipv6;
        bool c1=false, c2=false;
        if(ipv4Check(ip+".")) return "IPv4";
        if(ipv6Check(ip+":")) return "IPv6";
        return "Neither";
    }
};
