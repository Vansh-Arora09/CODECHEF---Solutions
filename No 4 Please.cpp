#include <bits/stdc++.h>
using namespace std;

int main() {
	 // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int c_1=0;
        int c_2=0;
        int c_3=0;
        for(int i:arr){
            if(i==1) c_1++;
            if(i==2) c_2++;
            if(i==3) c_3++;
        }
        int rem_1_3 = min(c_1,c_3);
        int rem_c_2 = max(0,c_2-1);
        
        cout<<rem_c_2+rem_1_3<<endl;
    }
}
