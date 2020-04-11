#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll go(ll n,ll * dp)
{
	// cout<<n<<endl;
	if(n==0) return 0;
	else if(n==1)  return 1;
	else if(n<0)  return INT_MAX;
	else
	{
	   ll &ans=dp[n];
	   if(ans!=-1)  return ans;
	   else
	   {
	   	 
	   	 ll option5 =go(n-100,dp);
	   	
	   	 ll option4= go(n-20,dp);
	   	
	   	 ll option3= go(n-10,dp);
	   	 
	   	 ll option2= go(n-5,dp);
	   	 
	   	 ll  option1 = go(n-1,dp);
	   	 
	   	 ans=1+min(min(min(min(option1,option2),option3),option4),option5);
	   	 
	   	 return ans;
	   }
	}
}
int main()
{
	ll n;
	cin>>n;
	ll m=0;
	if(n>=100)
	{
		m+=(n/100);
		n-=(n/100)*100;
	}
	if(n>=20)
	{
		m+=(n/20);
		n-=(n/20)*20;
	}
	if(n>=10)
	{
		m+=n/10;
		n-=(n/10)*10;
	}
	if(n>=5)
	{
		m+=(n/5);
		n-=(n/5)*5;
	}
	if(n>=1)
	{
		m+=(n/1);
	}
	cout<<m<<endl;
}