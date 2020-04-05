#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define M 1000000007

void solve(ll t)
{
	ll n,ans=0,cntr=0,cntc=0;
	cin>>n;
	ll a[n+1][n+1];
	for(ll i=0;i<n;i++)
	{
		set<ll> s;
		for(ll j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(i==j) ans+=a[i][j];
			s.insert(a[i][j]);
		}
		if(s.size()!=n) cntr++;
	}
	for(ll i=0;i<n;i++)
	{
		set<ll> s;
		for(ll j=0;j<n;j++)
		{
			s.insert(a[j][i]);
		}
		if(s.size()!=n) cntc++;
	}
	cout<<"Case #"<<t<<": "<<ans<<" "<<cntr<<" "<<cntc<<endl;
	
}

int main() 
{
	FAST
	ll t=1;
	cin>>t;
	for(ll i=0;i<t;i++) solve(i+1);
	return 0;
}
    
