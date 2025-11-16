#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int diag1 = min(x-1,y-1);
        int diag2 = min(n-x,y-1);
        int diag3 = min(n-x,n-y);
        int diag4 = min(x-1,n-y);
        
        int str = 2*(n-1);
        cout<<str+diag1+diag2+diag3+diag4<<endl;
    }
}
