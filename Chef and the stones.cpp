 #include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    long long x,y,z,s,zsum,ssum;
	    
	    cin>>x>>y>>z;
	    
	    zsum=(z*(z+1))/2;
	    
	    s=min(x,y);
	    ssum=min(s,zsum);
	    
	    cout<<x+y-(2*ssum)<<"\n";
	    
	    
	}
	return 0;
}
