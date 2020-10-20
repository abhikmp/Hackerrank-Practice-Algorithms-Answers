#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int k=0;k<t;++k) {
        float tm = 0;
        float tr = 0;
        int n;
        cin>>n;
        int P[n];
        for(int i=0;i<n;++i) {
            cin>>P[i];
        }

        int m=0,r=n-1;
        int prev_m= -1,prev_r = -1;
        while(m != r-1) {
            if(prev_m != m) 
                tm += (float)P[m]/2;
            if(prev_r != r)
                tr += (float)P[r];

            prev_m = m;
            prev_r = r;
            // cout<<"tm: "<<tm<<"\ttr: "<<tr<<endl;
            if(tm < tr) {
                m++;
            }
            else if(tm > tr) {
                r--;
            }
            else {
                m++;
            }
            if(m >= r) {
                // cout<<"reached here";
                break;
            }

            // cout<<m<<" "<<r<<endl<<endl;
        }
        if(t == 24)
            

        cout<<m+1<<" "<<n-r<<endl;
    }
    return 0;
}