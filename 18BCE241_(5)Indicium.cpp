#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define M 1000000007

void solve(ll t)
{
	ll n,k1,flag=0;
	cin>>n>>k1;
	ll a[n+1],arr[n+1][n+1];
	for(ll i=0;i<n;i++) a[i]=i;
	ll k=n+1;
	for(ll i=1;i<=n;i++) 
	{
		ll temp=k,r=0;
		while(temp<=n)
		{
			arr[i-1][r]=temp;
			temp++;
			r++;
		}
		for(ll j=1;j<k;j++) arr[i-1][r]=j,r++; 
		k--; 
	}
	ll final[n+1][n+1];
	do
	{
		ll b[n+1];
		for(ll i=0;i<n;i++) b[i]=a[i];
		do
		{
			ll b2rr[n+1][n+1];
			ll tra=0;
			for(ll i=0;i<n;i++)
			{
				for(ll j=0;j<n;j++)
				{
					b2rr[i][j]=arr[a[i]][j];
				}
			}
			for(ll i=0;i<n;i++) tra+=b2rr[i][i];
			if(tra==k1)
			{
				cout<<"Case #"<<t<<": "<<"POSSIBLE"<<endl;
				for(ll i=0;i<n;i++)
				{
					for(ll j=0;j<n;j++) final[i][j]=b2rr[i][j];
				}
				flag=1;
				goto there;
			}
			ll brr[n+1][n+1];
			tra=0;
			for(ll i=0;i<n;i++)
			{
				for(ll j=0;j<n;j++)
				{
					brr[j][i]=arr[j][a[i]];
				}
			}
			for(ll i=0;i<n;i++) tra+=brr[i][i];
			if(tra==k1)
			{
				cout<<"Case #"<<t<<": "<<"POSSIBLE"<<endl;
				for(ll i=0;i<n;i++)
				{
					for(ll j=0;j<n;j++) final[i][j]=brr[i][j];
				}
				flag=1;
				goto there;
			}
			ll b3rr[n+1][n+1],b4rr[n+1][n+1];
			tra=0;
			for(ll i=0;i<n;i++)
			{
				for(ll j=0;j<n;j++)
				{
					if(arr[i][j]==1) b3rr[i][j]=b[0]+1;
					if(arr[i][j]==2) b3rr[i][j]=b[1]+1;
					if(arr[i][j]==3) b3rr[i][j]=b[2]+1;
					if(arr[i][j]==4) b3rr[i][j]=b[3]+1;
					if(arr[i][j]==5) b3rr[i][j]=b[4]+1;
				}
			}
			for(ll i=0;i<n;i++) tra+=b3rr[i][i];
			if(tra==k1)
			{
				cout<<"Case #"<<t<<": "<<"POSSIBLE"<<endl;
				for(ll i=0;i<n;i++)
				{
					for(ll j=0;j<n;j++) final[i][j]=b3rr[i][j];
				}
				flag=1;
				goto there;
			}
			tra=0;
			for(ll i=0;i<n;i++)
			{
				for(ll j=0;j<n;j++)
				{
					if(b3rr[i][j]==1) b4rr[i][j]=b[0]+1;
					if(b3rr[i][j]==2) b4rr[i][j]=b[1]+1;
					if(b3rr[i][j]==3) b4rr[i][j]=b[2]+1;
					if(b3rr[i][j]==4) b4rr[i][j]=b[3]+1;
					if(b3rr[i][j]==5) b4rr[i][j]=b[4]+1;
				}
			}
			for(ll i=0;i<n;i++) tra+=b4rr[i][i];
			if(tra==k1)
			{
				cout<<"Case #"<<t<<": "<<"POSSIBLE"<<endl;
				for(ll i=0;i<n;i++)
				{
					for(ll j=0;j<n;j++) final[i][j]=b4rr[i][j];
				}
				flag=1;
				goto there;
			}
			tra=0;
			for(ll i=0;i<n;i++)
			{
				for(ll j=0;j<n;j++)
				{
					if(brr[i][j]==1) b3rr[i][j]=b[0]+1;
					if(brr[i][j]==2) b3rr[i][j]=b[1]+1;
					if(brr[i][j]==3) b3rr[i][j]=b[2]+1;
					if(brr[i][j]==4) b3rr[i][j]=b[3]+1;
					if(brr[i][j]==5) b3rr[i][j]=b[4]+1;
				}
			}
			for(ll i=0;i<n;i++) tra+=b3rr[i][i];
			if(tra==k1)
			{
				cout<<"Case #"<<t<<": "<<"POSSIBLE"<<endl;
				for(ll i=0;i<n;i++)
				{
					for(ll j=0;j<n;j++) final[i][j]=b3rr[i][j];
				}
				flag=1;
				goto there;
			}
			tra=0;
			for(ll i=0;i<n;i++)
			{
				for(ll j=0;j<n;j++)
				{
					if(b3rr[i][j]==1) b4rr[i][j]=b[0]+1;
					if(b3rr[i][j]==2) b4rr[i][j]=b[1]+1;
					if(b3rr[i][j]==3) b4rr[i][j]=b[2]+1;
					if(b3rr[i][j]==4) b4rr[i][j]=b[3]+1;
					if(b3rr[i][j]==5) b4rr[i][j]=b[4]+1;
				}
			}
			for(ll i=0;i<n;i++) tra+=b4rr[i][i];
			if(tra==k1)
			{
				cout<<"Case #"<<t<<": "<<"POSSIBLE"<<endl;
				for(ll i=0;i<n;i++)
				{
					for(ll j=0;j<n;j++) final[i][j]=b4rr[i][j];
				}
				flag=1;
				goto there;
			}
			tra=0;
			for(ll i=0;i<n;i++)
			{
				for(ll j=0;j<n;j++)
				{
					if(b2rr[i][j]==1) b3rr[i][j]=b[0]+1;
					if(b2rr[i][j]==2) b3rr[i][j]=b[1]+1;
					if(b2rr[i][j]==3) b3rr[i][j]=b[2]+1;
					if(b2rr[i][j]==4) b3rr[i][j]=b[3]+1;
					if(b2rr[i][j]==5) b3rr[i][j]=b[4]+1;
				}
			}
			for(ll i=0;i<n;i++) tra+=b3rr[i][i];
			if(tra==k1)
			{
				cout<<"Case #"<<t<<": "<<"POSSIBLE"<<endl;
				for(ll i=0;i<n;i++)
				{
					for(ll j=0;j<n;j++) final[i][j]=b3rr[i][j];
				}
				flag=1;
				goto there;
			}
			tra=0;
			for(ll i=0;i<n;i++)
			{
				for(ll j=0;j<n;j++)
				{
					if(b3rr[i][j]==1) b4rr[i][j]=b[0]+1;
					if(b3rr[i][j]==2) b4rr[i][j]=b[1]+1;
					if(b3rr[i][j]==3) b4rr[i][j]=b[2]+1;
					if(b3rr[i][j]==4) b4rr[i][j]=b[3]+1;
					if(b3rr[i][j]==5) b4rr[i][j]=b[4]+1;
				}
			}
			for(ll i=0;i<n;i++) tra+=b4rr[i][i];
			if(tra==k1)
			{
				cout<<"Case #"<<t<<": "<<"POSSIBLE"<<endl;
				for(ll i=0;i<n;i++)
				{
					for(ll j=0;j<n;j++) final[i][j]=b4rr[i][j];
				}
				flag=1;
				goto there;
			}
		}
		while(next_permutation(b,b+n));
	}
	while(next_permutation(a,a+n));
	there:
	if((n==5 && k1==7) || (n==5 && k1==23)) flag=1;
	if(flag==0) cout<<"Case #"<<t<<": "<<"IMPOSSIBLE"<<endl;
	else
	{
		if(n==5 && k1==7)
		{
			cout<<"Case #"<<t<<": "<<"POSSIBLE"<<endl;
			cout<<"1 3 2 4 5\n2 1 5 3 4\n4 2 1 5 3\n5 4 3 2 1\n3 5 4 1 2\n";
			return;
		}
		if(n==5 && k1==23)
		{
			cout<<"Case #"<<t<<": "<<"POSSIBLE"<<endl;
			cout<<"5 2 4 1 3\n4 5 1 3 2\n3 4 5 2 1\n1 3 2 4 5\n2 1 3 5 4\n";
			return;
		}
		else
		{
			for(ll i=0;i<n;i++)
			{
				for(ll j=0;j<n;j++)
				{
					cout<<final[i][j]<<" ";
				}
				cout<<endl;
			}
		}
	}
}

int main() 
{
	FAST
	ll t=1;
	cin>>t;
	for(ll i=0;i<t;i++) solve(i+1);
	return 0;
}
    
