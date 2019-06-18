#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long x;
	    map<long long,long long> mp;
	    vector<long long> vc,vc1;
	    for(long long i=0;i<n;i++){
	        cin>>x;
	        mp[pow(x,2)]++;
	        vc.push_back(pow(x,2));
	    }
	    for(long long i=0;i<n-1;i++){
	        for(long long j=i+1;j<n;j++){
	            vc1.push_back(vc[i]+vc[j]);
	        }
	    }
	    long long cnt=0;
	    for(long long j=0;j<vc1.size();j++){
	        if(mp[vc1[j]]>0){
	            cout<<"Yes"<<endl;
	            cnt++;
	            break;
	        }
	   }
	   if(cnt==0){
	       cout<<"No"<<endl;
	   }
	}
	return 0;
}
