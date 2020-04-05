#include<bits/stdc++.h>
using namespace std;
string rev(string s)
{
    string ans;
    for(int i=s.size()-1;i>=0;i--) ans+=s[i];
    return ans;
}

string comp(string s)
{
    string ans;
    for(int i=0;i<s.size();i++) if(s[i]=='1') ans+='0'; else ans+='1';
    return ans;
}

string rc(string s)
{
    string ans;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++) if(s[i]=='0') ans+='1'; else ans+='0';
    return ans;
}
int main() 
{
	int t,b;
	cin>>t>>b;
	for(int i=0;i<t;i++)
	{
		if(b==10)
		{
			string str;
			int val;
			for(int j=10;j>0;j--)
			{
				cout<<j<<endl;
				cout.flush();
				cin>>val;
				str+=(val+'0');
			}
			reverse(str.begin(),str.end());
			cout<<str<<endl;
			char c;
			cin>>c;
			if(c=='N') break;
		}
		else
		{
			string str1,str2,str3,str4,last,ans3,ans4;
			for(int j=1;j<=5;j++)
			{
				cout<<j<<endl;
				cout.flush();
				int val;
				cin>>val;
				str1+=(val+'0');
			}
			string rvs1=rev(str1);
			string cos1=comp(str1);
			string corrs1=rc(str1);
			for(int j=16;j<=20;j++)
			{
				cout<<j<<endl;
				cout.flush();
				int val;
				cin>>val;
				str2+=(val+'0');
			}
			string rvs2=rev(str2);
			string cos2=comp(str2);
			string corrs2=rc(str2);
			for(int j=6;j<=10;j++)
			{
				cout<<j<<endl;
				cout.flush();
				int val;
				cin>>val;
				str3+=(val+'0');
			}
			string rvs3=rev(str3);
			string cos3=comp(str3);
			string corrs3=rc(str3);
			for(int j=11;j<=15;j++)
			{
				cout<<j<<endl;
				cout.flush();
				int val;
				cin>>val;
				str4+=(val+'0');
			}
			string rvs4=rev(str4);
			string cos4=comp(str4);
			string corrs4=rc(str4);
			for(int j=1;j<=10;j++)
			{
				cout<<j<<endl;
				cout.flush();
				int val;
				cin>>val;
				last+=(val+'0');
			}
			
			string fh=last.substr(0,5);
			string lh=last.substr(5,5);
			
			if(lh==str3)      ans3=str4;
			else if(lh==rvs4) ans3=rvs3;
			else if(lh==cos3) ans3=cos4;
			else              ans3=corrs3;
			
			if(fh==str1)      ans4=str2;
			else if(fh==rvs2) ans4=rvs1;
			else if(fh==cos1) ans4=cos2;
			else              ans4=corrs1;
			
			cout<<fh<<lh<<ans3<<ans4<<endl;
			
			char c;
			cin>>c;
			if(c=='N') break;
		}
	}
	return 0;
}
