#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<long long>v(n);
	    vector<long long>min_left(n);
	    vector<long long>max_left(n);
	    vector<long long>min_right(n);
	    vector<long long>max_right(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    
	    min_left[0]=max_left[0]=v[0];
	    
	    for(int i=1;i<n;i++)
	    {
	        min_left[i]=min(min_left[i-1]+v[i],v[i]);
	        max_left[i]=max(max_left[i-1]+v[i],v[i]);
	    }
	    
	    min_right[n-1]=max_right[n-1]=v[n-1];
	    
	    for(int i=n-2;i>=0;i--)
	    {
	        min_right[i]=min(min_right[i+1]+v[i],v[i]);
	        max_right[i]=max(max_right[i+1]+v[i],v[i]);
	    }
	    
	    long long ans=0;
	    for(int i=0;i<n-1;i++)
	    {
	        ans=max(ans,abs(min_left[i]-max_right[i+1]));
	        ans=max(ans,abs(max_left[i]-min_right[i+1]));
	        
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
