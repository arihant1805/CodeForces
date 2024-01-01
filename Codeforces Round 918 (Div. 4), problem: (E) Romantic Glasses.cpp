#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define F(a,b) for(int i=a;i<b;i++)
#define F2(a,b) for(int j=a;j<b;j++)
#define Fn(a,b) for(int i=a;i>=b;i--)
#define Fn2(a,b) for(int j=a;j>=b;j--)
#define el cout<<endl;
#define Y cout<<"YES"<<endl;
#define N cout<<"NO"<<endl;
void solve(){
    int n;
    cin>>n;
    int var1=0;
    ll a[n+1];
    F(1,n+1)cin>>a[i];
    map<ll,ll> mp;
    ll s[n+1];
    s[0]=0;
    F(1,n+1){
        if(i%2==0)a[i]=-a[i];
        s[i]=a[i]+s[i-1];
        mp[s[i]]++;
        if(mp[s[i]]==2||s[i]==0){ Y return;}
    }
    N  
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tt=1;
    cin>>tt;
    while(tt--)solve();
    return 0;
}
