#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    int n = s.length();
    int rot = 0;
    char curr = 'a';
    
    for(int i=0;i<n;++i) {
        
        int temp = abs(s[i] - curr);
        int temp1 = 26-temp;
        
        rot += temp < temp1? temp : temp1;


        curr = s[i];
    }
    cout<<rot;
    return 0;
}