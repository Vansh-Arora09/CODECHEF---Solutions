#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        if(n<4 || n%4!=0){
            cout<<"NO"<<endl;
        }
        else{
            vector<int> a;
            vector<int> b;
            int cnt=1;
            for(int i=0;i<n/4;i++){
                a.push_back(cnt++);
            }
            for(int i=n/4 ;i<(3*n)/4;i++){
                b.push_back(cnt++);
            }
            for(int i=((3*n)/4);i<n;i++){
                a.push_back(cnt++);
            }
            cout<<"YES"<<endl;
            for(int i=0;i<a.size();i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            
        }
    }
}
