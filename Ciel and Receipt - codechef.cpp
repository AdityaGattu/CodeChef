#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,y;
	    cin>>n;
	    int ans=0;
	    for(int i=11;i>=0;i--)
	    {
	        y=pow(2,i);
	        ans+= n/y;
	        n = n%y;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
