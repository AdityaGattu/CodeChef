#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    long long  i,n,k;
	    cin>>n>>k;
	    long long a[n];
	    
	    long long maxsum=-99999;
	    long long currsum=0,s1=0;
	    long long maxsum1=-99999;
	    long long currsum1=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s1+=a[i];
	        currsum+=a[i];
	        if(maxsum<currsum){maxsum=currsum;}
	        if(currsum<0){currsum=0;}
	    }
	    
	    long long ls=-999999,sum1=0,sum2=0;
	    long long rs=-999999;
	    for(int i=0;i<n;i++)
	    {
	        sum1+=a[i];
	        ls=max(ls,sum1);
	    }
	     for(int i=n-1;i>=0;i--)
	    {
	        sum2+=a[i];
	        rs=max(rs,sum2);
	    }
	    
	    long long finalsum,t,u,v,sum5;
	    
	    if(k!=1){
	    finalsum=ls+((k-2)*s1)+rs;
	    sum5=ls+rs;
	    
	    u=max(finalsum,sum5);
	    v=max(u,maxsum);
	    cout<<v<<"\n";}
	    else{cout<<maxsum<<"\n";}
	    
	    
	}
	return 0;
}
