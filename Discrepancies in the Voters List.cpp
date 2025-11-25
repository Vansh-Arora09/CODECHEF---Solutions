#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	vector<int> arr1(n1);
	vector<int> arr2(n2);
	vector<int> arr3(n3);
	unordered_map<int,int> mpp;
	for(int i=0;i<n1;i++){
	    cin>>arr1[i];
	    mpp[arr1[i]]++;
	}
	for(int i=0;i<n2;i++){
	    cin>>arr2[i];
	    mpp[arr2[i]]++;
	}
	for(int i=0;i<n3;i++){
	    cin>>arr3[i];
	    mpp[arr3[i]]++;
	}
	vector<int> final;
	for(auto it: mpp){
	    if(it.second>1){
	        final.push_back(it.first);
	    }
	}
	cout<<final.size()<<endl;
	sort(final.begin(),final.end());
	for(int i:final){
	    cout<<i<<endl;
	}

}
