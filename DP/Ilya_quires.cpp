#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll q;
  string s;
  cin>>s;
  vector<ll> v(s.size(),0);
  for(ll i=1;i<s.size();i++)
  {
  	if(s[i]==s[i-1]) v[i]=v[i-1]+1;
  	else v[i]=v[i-1];
  }
  cin>>q;
  while(q--)
  {
  	 ll l,r;
  	 cin>>l>>r;
  	 cout<<v[r-1]-v[l-1]<<endl;
  }
}