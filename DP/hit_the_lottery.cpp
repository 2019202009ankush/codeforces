#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll go(ll n,ll * dp)
{
	if(n==0) return 0;
	else if(n==1)  return 1;
	else if(n<0)  return INT_MAX;
	else
	{
	   ll &ans=dp[n];
	   if(ans!=-1)  return ans;
	   else
	   {
	   	 ll  option1 = go(n-1,dp);
	   	 ll option2= go(n-5,dp);
	   	 ll option3= go(n-10,dp);
	   	 ll option4= go(n-20,dp);
	   	 ll option5 =go(n-100,dp);
	   	 ans=1+min(min(min(min(option1,option2),option3),option4),option5);
	   	 return ans;
	   }
	}
}
int main()
{
	ll n;
	cin>>n;
	ll *dp=new ll[n+1];
	for(int i=0;i<=n;i++)
	  dp[i]=-1;
	cout<<go(n,dp)<<endl;
}