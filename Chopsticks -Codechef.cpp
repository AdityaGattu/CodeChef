#include<bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;

int main() {
	// your code goes here
	
	ll n,d,i;
	cin>>n>>d;
	
	ll a[100000];
	
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	
	sort(a,a+n);
	
	ll cnt=0;
	
	for(i=0;i<n-1;i++)
	{
	    if(abs(a[i]-a[i+1])<=d)
	    {cnt++;i=i+1;}
	    
	}
	
	
	cout<<cnt;
	
	
	return 0;
}
