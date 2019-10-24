#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i) {
        cin>>a[i];
    }
    int prize = 0;
    int init = a[0];
    int init_index_st[100] = {0};
    int init_index_fn[100] = {0};
    int k =1;
    for(int i=1;i<n;++i) {
        if(init > a[i]) {
            prize += a[i-1]-init;
            init = a[i];
            init_index_fn[k-1] = i-1;
            init_index_st[k] = i;
            k++;
        }
    }
    int temp = prize + (a[n-1]-init);
    if(temp < init) {
        // cout<<init<<endl;
    }
    else {
        
        // cout<<temp+init<<endl;
    }
    
    return 0;
}