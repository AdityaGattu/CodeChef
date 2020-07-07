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
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    
	    vector<int>len(n);
	    len[n-1]=1;
	    
	    for(int i=n-2;i>=0;i--)
	    {
	        
	        if(v[i]*v[i+1]<0)
	        {
	            len[i]=len[i+1]+1;
	        }
	        else{
	            len[i]=1;
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<len[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
