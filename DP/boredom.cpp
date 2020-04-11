#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll go(ll *arr,ll n,map<ll,ll> & m,ll * dp,ll mx)
{
	
	if(mx==1) return m[mx];
	else if(mx==0) return 0;
	else
	{
		ll &ans=dp[mx];
		if(ans!=-1)
		  return ans;
		else
		{
			ll option1 = go(arr,n,m,dp,mx-1);
			ll option2 = go(arr,n,m,dp,mx-2);
			ans=max(option1,option2+m[mx]*mx);
			return ans;
		}
	}

}
int main()
{
	ll n;
	cin>>n;
	ll *arr = new ll[n];
	map<ll,ll> m;
	ll mx=INT_MIN;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		m[arr[i]]++;
		mx=max(mx,arr[i]);
	}
	ll * dp = new ll[100009];
	for(ll i=0;i<100009;i++)
	{
		dp[i]=-1;
	}
	
	// cout<<mx<<endl;
	cout<<go(arr,n,m,dp,100000)<<endl;
	
	 
}