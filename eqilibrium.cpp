#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long arr[n];
	    vector<long long> vc,vc1;
	    for(long long i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    long long sum=0,sum1=0;
	    for(long long i=0;i<n-1;i++){
	        sum=sum+arr[i];
	        vc.push_back(sum);
	    }
	    for(long long i=n-1;i>0;i--){
	        sum1+=arr[i];
	        vc1.push_back(sum1);
	    }
	    long long sz=vc.size();
	    for(long long i=0;i<sz;i++){
	        //cout<<vc[i]<<" "<<vc1[i]<<endl;
	        if(vc[i]==vc1[i]){
	            cout<<(i+2)<<endl;
	            break;
	        }
	    }
	   // for(long long i=0;i<sz;i++){
	   //     if(vc[i]==vc1[i]){
	   //         cout<<(i+1)<<endl;
	   //         break;
	   //     }
	   // }
	
	}
	return 0;
}
