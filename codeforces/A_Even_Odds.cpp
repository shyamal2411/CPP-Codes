#include<bits/stdc++.h> 
using namespace std;

#define int long long 
#define nl endl
const int mod=1000000007;
typedef vector<int> vi;
#define pi pair<int,int>
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

void solve(){
int n,k,i,p,q,r,count=0,j,flag,ans=0;
 in n>>k;
 
 if(k<=(n+1)/2)
    out 2*k-1<<nl;
 
 else
 {
     k-=((n+1)/2);
     out 2*k<<nl;
 } 
}


int32_t main(){
    FIO int t; t=1;
    //in t;
    while(t--) solve();
  
return 0;
}