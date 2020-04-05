#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define M 1000000007

void solve(ll t)
{
	string s;
	ll temp=0,op=0;
	cin>>s;
	string ans="";
	for(ll i=0;i<s.length();i++)
	{
		if(temp<(ll)(s[i]-'0'))
		{
			ll r=(ll)(s[i]-'0')-temp;
			for(ll j=0;j<r;j++) ans+='(';
			temp=(ll)(s[i]-'0');
			op+=r;
		}
		else if(temp>(ll)(s[i]-'0')) 
		{
			ll r=abs((ll)(s[i]-'0')-temp);
			for(ll j=0;j<r;j++) ans+=')';
			temp=(ll)(s[i]-'0');
			op-=r;
		}
		ans+=s[i];
	}
	while(op)
	{
		op--;
		ans+=')';
	}
	cout<<"Case #"<<t<<": "<<ans<<endl;
	
}

int main() 
{
	FAST
	ll t=1;
	cin>>t;
	for(ll i=0;i<t;i++) solve(i+1);
	return 0;
}
    
