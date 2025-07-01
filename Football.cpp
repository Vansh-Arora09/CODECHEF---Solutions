#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int> gl;
        vector<int> fl;
        int c = n;
        while(n--){
            int goal;
            cin>>goal;
            gl.push_back(goal);
        }
        while(c--){
            int foul;
            cin>>foul;
            fl.push_back(foul);
        }
        for(int i=0;i<gl.size();i++){
            gl[i]*=20;
        }
        for(int i=0;i<fl.size();i++){
            fl[i]*=10;
        }
        for(int i=0;i<gl.size();i++){
            gl[i] = gl[i]-fl[i];
            if(gl[i]<0){
                gl[i]=0;
            }
        }
        int max = gl[0];
        for(int i=1;i<gl.size();i++){
            if(gl[i]>max){
                max=gl[i];
            }
        }
        cout<<max<<endl;
    }
}
