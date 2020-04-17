#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll n,m;
  cin>>n>>m;
   ll *  arr =new ll[n];
   ll * pre = new ll[n];
   for(ll i=0;i<n;i++) cin>>arr[i];
   unordered_set<ll> s;
   s.insert(arr[n-1]);
   pre[n-1]=1;
   for(ll i=n-2;i>=0;i--)
   {
   	if(s.find(arr[i])!=s.end()) pre[i]=pre[i+1];
   	else
   	{
   		pre[i]=pre[i+1]+1;
   		s.insert(arr[i]);
   	}
   }
   while(m--)
   {
   	ll t;
   	cin>>t;
   	t--;
   	cout<<pre[t]<<endl;
   }
}