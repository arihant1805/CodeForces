#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define be begin()
#define e end()
#define ll long long int
#define F(a,b) for(int i=a;i<b;i++)
#define F2(a,b) for(int j=a;j<b;j++)
#define Fn(a,b) for(int i=a;i>=b;i--)
#define Fn2(a,b) for(int j=a;j>=b;j--)
#define el cout<<endl;
#define pb push_back
#define Y cout<<"YES"<<endl;
#define N cout<<"NO"<<endl;
#define p(a) cout<<a<<endl;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
      return a; 
    return gcd(b, a % b); 
}  
ll lcm(ll a, ll b) 
{ 
    return (a / gcd(a, b)) * b; 
} 
void solve(){
    ll n;
    cin>>n;
    ll min1,min2=n+1;
    ll ans=0;
    cin>>min1;
    F(0,n-1){
      ll a;
      cin>>a;
      if(min1>min2&&a<=min2){
        min2=a;
      }else if(min2>min1&&a<=min1){
        min1=a;
      }else if(min1<min2&&a<=min2){
        min2=a;
      }else if(min2<min1&&a<=min1){
        min1=a;
      }else if(min1==min2&&min1>=a){
        min1=a;
      }else{
        if(min1>min2){
          min2=a;
        }else{
          min1=a;
        }
        ans++;
      }
    }
    p(ans)
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tt=1;
    cin>>tt;
    while(tt--)solve();
    return 0;
}
