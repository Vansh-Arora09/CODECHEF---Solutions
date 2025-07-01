#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c0=0;
        int c1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                c0++;
            }
            else{
                c1++;
            }
        }
        int ans = min(c0,c1);
        if(ans%2!=0){
            cout<<"Zlatan"<<endl;
        }
        else{
            cout<<"Ramos"<<endl;
        }
        
    }
}
