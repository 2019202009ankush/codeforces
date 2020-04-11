#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll go(ll n,ll a,ll b,ll c,ll *dp)
{
	if(n<0) return -1;
	else if(n==0) return 0;
	else
	{
		ll &ans=dp[n];
		if(ans!=-3) return ans;
		else
		{
			ll option1 = go(n-a,a,b,c,dp);
			ll option2 = go(n-b,a,b,c,dp);
			ll option3 = go(n-c,a,b,c,dp);
			if(option1==-1&&option2==-1&&option3==-1)
			  ans=-1;
			else 
			  ans=1+max(max(option2,option3),option1);
			return ans;
		}
	}
}
int main()
{
	ll n,a,b,c;
	cin>>n>>a>>b>>c;
	ll * dp = new ll[4010];
	for(ll i=0;i<=n;i++)
	{
		dp[i]=-3;
	}
	cout<<go(n,a,b,c,dp)<<endl;

	
}