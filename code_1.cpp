#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    int largest = a[n-1];
    int smallest = a[0];
    int diff = 0;
    int res1 = 0, res2 = 0;

    for(int i=0;i<n;++i) {
        diff = largest - a[i];
        if(diff % 2 != 0) {
            res1 += 1;
        }
    }
    for(int i=0;i<n;++i) {
        diff = a[i] - smallest;
        if(diff % 2 != 0) {
            res2 += 1;
        }
    }
    if(res1 > res2) {
        cout<<res2;
    }
    else {
        cout<<res1;
    }
    return 0;
}