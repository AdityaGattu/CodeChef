#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length()/2;
	    map<char,int>m,m1;
	    
	    for(int i=0;i<n;i++)
	    {
	        m[s[i]]++;
	    }
	    int f=0;
	    if(s.length()%2!=0){n=n+1;}
	    for(int i=n;i<s.length();i++)
	    {
	        m1[s[i]]++;
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(m[s[i]]!=m1[s[i]]){f=1;break;}
	    }
	    
	    if(f==0){cout<<"YES\n";}
	    else{cout<<"NO\n";}
	}  
	return 0;
}
