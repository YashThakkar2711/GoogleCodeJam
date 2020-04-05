#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define M 1000000007

void solve(ll t)
{
	ll n,sc=-1,sj=-1,ec=-1,ej=-1;
	cin>>n;
	vector<pair<pair<ll,ll>,ll>> v;
	vector<pair<ll,char>> ans;
	for(ll i=0;i<n;i++)
	{
		ll x,y;
		cin>>x>>y;
		v.push_back({{x,y},i});
	}
	sort(v.begin(),v.end());
	for(ll i=0;i<n;i++)
	{
		ll x=v[i].first.first;
		ll y=v[i].first.second;
		if(sc<x && sc<y && ec<=x && ec<y) 
		{
			ans.push_back({v[i].second,'C'});
			sc=x;
			ec=y;
		}
		else if(sj<x && sj<y && ej<=x && ej<y)
		{
			ans.push_back({v[i].second,'J'});
			sj=x;
			ej=y;
		}
		else
		{
			cout<<"Case #"<<t<<": "<<"IMPOSSIBLE"<<endl;
			return;
		}
	}
	string ans1;
	sort(ans.begin(),ans.end());
	for(ll i=0;i<n;i++) ans1+=ans[i].second;
	cout<<"Case #"<<t<<": "<<ans1<<endl;
	
}

int main() 
{
	FAST
	ll t=1;
	cin>>t;
	for(ll i=0;i<t;i++) solve(i+1);
	return 0;
}
    
