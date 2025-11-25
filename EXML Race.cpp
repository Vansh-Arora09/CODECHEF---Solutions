#include <bits/stdc++.h>
using namespace std;

int main() {
	 // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<double> cars(n);
        for(int i=0;i<n;i++){
            double d,t;
            cin>>d>>t;
            cars[i] = d/t;
        }
        int max = 0;
        for(int i=1;i<n;i++){
            if(cars[i]>cars[max]){
                max = i;
            }
        }
        cout<<max+1<<endl;
    }
}
