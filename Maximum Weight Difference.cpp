#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k,y;
	    cin>>n>>k;
	    int s=0;
	    int a[100000];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s+=a[i];
	    }
	    
	    sort(a,a+n);
	    
	    int s1=0;
	    int s2=0;
	    
	    if(k>(n-k)){k=n-k;}
	    
	    for(int i=0;i<k;i++)
	    {
	        s1+=a[i];
	    }
	    
	    for(int i=k;i<n;i++)
	    {
	        s2+=a[i];
	    }
	    
	    cout<<s2-s1<<"\n";
	    
	    
	}
	return 0;
}
