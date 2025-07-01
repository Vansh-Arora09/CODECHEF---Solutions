#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int countD=0;
        int countQ=0;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int len = s1.length();
        for(int i=0;i<len;i++){
            if(s1[i]!=s2[i] && (s1[i]!='?' && s2[i]!='?')){
                countD++;
            }
            else if(s1[i]=='?' || s2[i]=='?'){
                countQ++;
            }
        }
        int min = countD;
        int max = countD+countQ;
        cout<<min<<" "<<max<<endl;
    }
}
