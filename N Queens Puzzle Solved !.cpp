#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double prod = 0.143*n;
        double val = pow(prod,n);
        int ans = (int)round(val);
        cout<<ans<<endl;
    }
}
