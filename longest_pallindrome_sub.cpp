#include<bits/stdc++.h>

using namespace std;

int pallindrome(string s) {
    
    int i=0;
    int k = s.length()-1;
    char ch[1000];
    for(;k>=0;--k) {
        ch[i] = s[k];
        i++;
    }
    ch[i] = '\0';
    string val = ch;
    // cout<<val;
    if(val == s) {
        return 1;
    }

    return 0;
}



int main() {
    string s,res;
    int length = 0;
    cin>>s;
    string temp;
    cout<<s.substr(0,s.length());
    cout<<pallindrome("malayalam")<<endl;
    for(int i = 0; i <= s.length() ; ++i) {
        for(int j=0;j <= s.length();++j) {
            temp = s.substr(i,j);
            // cout<<temp<<endl;
            if(pallindrome(temp)) {
                if(temp.length() >= length) {
                    length = temp.length();
                    res = temp;
                    cout<<res<<endl;
                }
            }        
        }
    }
    cout<<res<<" "<<length;
    
    return 0;
}