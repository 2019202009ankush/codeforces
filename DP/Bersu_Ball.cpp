#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll n;
  cin>>n;
  ll * arr1 = new ll [n];
  for(ll i=0;i<n;i++)
    cin>>arr1[i];
  sort(arr1,arr1+n);
  ll m;
  cin>>m;
  ll * arr2 = new ll [m];
  for(ll i=0;i<m;i++)
   cin>>arr2[i];
  sort(arr2,arr2+m);
  ll count=0;
  for(ll i=0;i<n;i++)
  for(ll j=0;j<m;j++)
  {
  	if(abs(arr1[i]-arr2[j])<=1) 
  	{
  		count++;
  		arr2[j]=1e6;
  		break;
  	}
  }
  cout<<count<<endl;
  
}