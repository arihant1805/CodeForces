#include<bits/stdc++.h>
using namespace std;
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
void solve(){
    int n;
    cin>>n;
    map<char,int>mp;
    int m=0;
    F(0,n){
        char c;
        cin>>c;
        mp[c]++;
        m=max(m,mp[c]);
    }
    if(m<=n-m){
        if(n%2==0)p("0")
        else p("1")
    }else{
        p(2*m-n)
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tt=1;
    cin>>tt;
    while(tt--)solve();
    return 0;
}
