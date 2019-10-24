#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        long n,m;
        cin>>n>>m;
        long k=1;
        long temp;

        long sum = 0;
        while(k <= n) {
            temp = m * k;
            sum += temp * 10;
            k++;    
        }
        
    }  
    

    return 0;
}