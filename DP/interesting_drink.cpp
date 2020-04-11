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
  {
  	ll t;
  	cin>>t;
  	cout<<upper_bound(arr1,arr1+n,t)-arr1<<endl;
  }
  
}